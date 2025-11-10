#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>=b; --i)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;
const int N = 1e9+7;

void solve() {


    int costs[5][5] = {
        {0 , 3 , 14, 18, 15},
        {3 , 0 , 4 , 22, 20},
        {17, 9 , 0 , 16, 4},
        {6 , 3 , 7 , 0 , 12},
        {9  ,15, 11, 5 , 0}
    };


    int arr[4] = {2, 3, 4, 5};

    vector<int> sol;

    int _min = 9999;
        
    do {
        vector<int> tmp;
        int sum = 0;
        cout << 1 << " ";
        tmp.push_back(1);
        sum += costs[0][arr[0]];
        rep(i, 0, 3) {
            tmp.push_back(arr[i]);
            cout << arr[i] << " ";
            sum += costs[arr[i] - 1][arr[i+1] - 1];
        }
        tmp.push_back(arr[3]);
        sum += costs[4][0];
        if (sum < _min) {
            _min = sum;
            sol = tmp;
        }
        cout << arr[3] << " => " << sum;
        cout << endl;
    } while (next_permutation(arr, arr + 4));

    cout << endl;

    rep(i, 0, 5) cout << sol[i] << " ";
    cout << " => " << _min;
    

}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}