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

    // rep(i, 0, k) cout << arr[i] << " ";
    // cout << endl;



    // rep(i, 0, k) cnt += ori[i] != arr[i];

    // cout << cnt << endl;;

    int hash[n + 1];
    memset(hash, 0, sizeof(hash));

    rep(i, 0, k) hash[ori[i] + 1]++;
    rep(i, 0, k) {
        if (hash[arr[i] + 1] == 0) cnt ++;
    };

    cout << (cnt == 0 ? k : cnt) << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}