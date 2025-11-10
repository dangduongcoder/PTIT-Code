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

    int n, k;
    cin >> n >> k;

    int arr[n];

    rep(i, 0, n) cin >> arr[i];

    int mid = -1;

    rep(i, 1, n - 1) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
            mid = i;
            break;
        }
    }

    if (mid != -1) {
        int s1 = find(arr, arr + mid, k) - arr + 1;
        int s2 = find(arr + mid + 1, arr + n, k) - arr + 1;
        
        if (s1 < mid + 1) {
            cout << s1;
        } else {
            cout << s2;
        }

    } else {
        cout << find(arr, arr + n, k) - arr + 1 << " ";
    }

    cout << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}