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

int arr[20][20];
int n;
vector<string> v;
vector<string> res;

void Try(int i, int j) {



    if (i == n - 1 && j == n - 1) {
        string tmp = "";
        for(string x : v) tmp += x;
        res.push_back(tmp);
        return;
    }



    //Doc xuong
    if (i != n - 1 && arr[i + 1][j] == 1) {
        v.push_back("D");
        Try(i + 1, j);
        v.pop_back();
    }
    //Ngang phai
    if (j != n - 1 && arr[i][j + 1] == 1) {
        v.push_back("R");
        Try(i, j + 1);
        v.pop_back();
    }


}

void solve() {
    v.clear();
    res.clear();
    cin >> n;

    rep(i, 0, n)
        rep(j, 0, n)
            cin >> arr[i][j];

    if (arr[0][0] == 0) {
        cout << - 1 << endl;
        return;
    }

    Try(0, 0);
    if(res.size() == 0) cout << -1;
    else {
        sort(all(res));
        for(string x : res) cout << x << " ";
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