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
vector<int> v;
int sum = 0;
int arr[50] = {0};
int cnt = 0;

void Try(int i) {
    rep(j, i, n) {
        sum += arr[j];
        v.push_back(arr[j]);
        if (sum == k) {
            // for(int x : v) cout << x;
            int s = sz(v);
            cout << "[";
            rep(k, 0, s) cout << v[k] << (k != s - 1 ? " " : "");
            cout << "]";
            cnt ++;
            // cout << endl;
        } else if (sum < k) {
            Try(j);
        }
        sum -= arr[j];
        v.pop_back();
    }
}

void solve() {

    sum = 0;
    cnt = 0;
    v.clear();
    cin >> n >> k;
    
    rep(i, 0, n) cin >> arr[i];

    sort(arr, arr + n);

    Try(0);
    if (cnt == 0) {
        cout << -1;
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