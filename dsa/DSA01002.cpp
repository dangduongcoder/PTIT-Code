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

    int arr[k];

    rep(i, 0, k) cin >> arr[i];

    int ori[k];

    rep(i, 0, k) ori[i] = arr[i];

    for (int i = k - 1 ; i >= 0; i--) {
        if (arr[i] < n - k + i + 1) {
            arr[i]++;
            for (int j = i + 1 ; j < k ; j ++) {
                arr[j] = arr[j - 1] + 1;
            }
            break;
        }
    }

    int cnt = 0;
    bool ok = true;

    rep(i, 0, k) {
        if (arr[i] != n - k + i + 1) {
            ok = false;
            break;
        }
    }

    if(ok) {
        rep(i, 1, k + 1) cout << i << " ";
    } else {
        rep(i, 0, k) cout << arr[i] << " ";
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