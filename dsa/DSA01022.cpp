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

    int n;
    cin >> n;

    int arr[n];
    int inp[n];


    rep(i, 0, n) cin >> inp[i];
    rep(i, 0, n) arr[i] = i + 1;

    int cnt = 1;

    do {
        bool ok = true;
        rep(i, 0, n) {
            if (inp[i] != arr[i]) {
                ok = false;
                break;
            } 
        } 
        if (ok) {
            cout << cnt << endl;
        }  else {
            cnt ++;
        }
    } while (next_permutation(arr, arr + n));

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}