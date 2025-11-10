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

    deque<int> q;

    for( int i = 0 ; i < n ; i ++) {
        string query; cin >> query;


        if (query == "PUSHFRONT") {
            int r; cin >> r;
            q.push_front(r);
        }

        if (query == "POPFRONT") {
            if (q.size() > 0) {
                q.pop_front();
            }
        }

        if (query == "PRINTFRONT") {
            if (q.size() > 0) {
                cout << q.front() << endl;
            } else {
                cout << "NONE" << endl;
            }
        }

        if (query == "PUSHBACK") {
            int r; cin >> r;
            q.push_back(r);
        }

        if (query == "POPBACK") {
            if (q.size() > 0) {
                q.pop_back();
            }
        }

        if (query == "PRINTBACK") {
            if (q.size() > 0) {
                cout << q.back() << endl;
            } else {
                cout << "NONE" << endl;
            }
        }
    }


}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}