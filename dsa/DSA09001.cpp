// DSA09001.cpp - Created: 29/08/2025 21:01 - dangduong

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define all(a) a.begin(), a.end()
#define sz(a) ((int)(a).size())
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a-1; i>=b; --i)
#define vi vector<int>
#define pii pair<int, int>
#define ll long long

const int MOD = 1e9 + 7;
const int N = 1e9;
const int INF = 1e9;
const ll LLINF = 1e18;

void solve() {
    int v, e;

    cin >> v >> e;

    vector<vector<int>> gr(v);
    // gr.resize(v);

    rep(i, 0, e) {
        int a, b;
        cin >> a >> b;

        gr[a - 1].push_back(b);
        gr[b - 1].push_back(a);
    }

    rep(i, 0, sz(gr)) {
        cout << i + 1 << ": ";
        rep(j, 0, sz(gr[i])) cout << gr[i][j] << " ";
        cout << endl;
    }

}

int main() {
    fast_cin();
    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}