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

int sum = 0;
int n;

vector<int> res;
int cnt = 0;
string sres = "";

void Try(int i) {
    for (int j = i; j >= 1; j--) {
        sum += j;
        res.push_back(j);
        if (sum < n) Try(j);
        else if (sum == n) {
            cout << "(";
            for (int k = 0; k < res.size(); k++) {
                cout << res[k];
                if (k < res.size() - 1) cout << " ";
            }
            cout << ") ";
        }
        sum -= j;
        res.pop_back();
    }
}

void solve() {

    cnt = 0;
    sres = "";

    cin >> n;
    sum = 0;
    Try(n);
    cout << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}