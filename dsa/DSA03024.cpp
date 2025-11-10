// DSA03024.cpp - Created: 27/08/2025 23:52 - dangduong

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
    int n;
    cin >> n;

    vector<pii> v;

    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;

        v.push_back({b, a});
    }

    sort(all(v));

    int res = 0;
    int end = -1;

    rep(i, 0, n) {
        // cout << v[i].second << " " << v[i].first << endl;
        if (v[i].second >= end) {
            res ++;
            end = v[i].first;
        }
    }

    cout << res << endl;
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