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

int n;
int arr[107];
int bit[107];

int ok = false;

void Try(int i) {
    if(!ok) {
        rep(j, 0, 2) {
            bit[i] = j;
            
            if (i == n - 1) {
                ll sum1 = 0, sum2 = 0;
                rep(k, 0, n) {
                    if(bit[k]) sum1 += arr[k];
                    else sum2 += arr[k];
                }
                if (sum1 == sum2 && sum1 != 0) {
                    ok = true;
                    // cout << sum1 << " " << sum2 << endl;
                    return;
                }
                // cout << endl;
            } else {
                Try(i + 1);
            }
        }
    }
}



void solve() {

    ok = false;
    cin >> n;


    rep(i, 0, n) cin >> arr[i];

    sort(arr, arr + n);

    Try(0);

    if(ok) cout << "YES";
    else cout << "NO";

    cout << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}