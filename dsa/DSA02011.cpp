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

int n, k;
int m = INF;
int sum = 0;
int cnt = 0;

int arr[35];
// int check[35];

void Try(int i) {

    if (i < n && arr[i] <= k && sum <= k) {
        
        for(int j = i ; j < n ; j ++) {
        // if(!check[j]) {
            // check[j] = 1;
            cnt ++;
            sum += arr[j];
            if (sum == k) {
                m = min(m, cnt);
            }
            if (sum < k) {
                Try(j + 1);
            }
            // if (sum > k) return;
            sum -= arr[j];
            cnt --;
            // check[j] = 0;
        // }
        }
        
    } 
    
}

void solve() {

    // memset(check, 0, sizeof(check));

    sum = 0;
    cnt = 0;
    m = INF;
    cin >> n >> k;
    rep(i, 0, n) cin >> arr[i];

    sort(arr, arr + n, greater<int>());

    Try(0);

    cout << (m == INF ? -1 : m) << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}