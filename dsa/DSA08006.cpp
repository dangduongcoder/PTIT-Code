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

// int res[16][50005];
vector<string> res;
vector<int> mark;

void init() {

    queue<string> q;
    q.push("6");
    q.push("8");
    mark.push_back(0);
    mark.push_back(2);
    int cnt = 0;
    int ls = 2;

    while (cnt < 33000)
    {
        string s = q.front();
        q.pop();
        // cout << s << " ";
        res.push_back(s);
        q.push(s + "6");
        q.push(s + "8");
        cnt ++;
        if (s.size() > ls) {
            ls = s.size();
            mark.push_back(cnt);
        }
        
    }

}

void solve() {

    int n;
    cin >> n;

    cout << mark[n] - 1 << endl;

    for(int i = mark[n] - 2 ; i >= 0 ; i --) {
        cout << res[i] << " ";
    }

    cout << endl;

}

int main() {
    fast_io;
    init();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}