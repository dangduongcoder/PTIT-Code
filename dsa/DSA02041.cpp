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

int step = -1;
int r = INF;

void Try(int n) {
    step ++;
    if (step <= r) {
        if (n == 1) {
            if (step < r) {
                r = step;
                // return;
            }
        } else {
            if (n % 2 == 0) {
                Try(n / 2);
            }

            if (n % 3 == 0) {
                Try(n / 3);
            }

            Try(n - 1);
        }
    }
    

    

    step --;
}

void solve() {

    step = -1;
    r = INF;
    int n;
    cin >> n;

    Try(n);

    cout << r << endl;


}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}