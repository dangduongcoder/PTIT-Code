// DSA03008.cpp - Created: 26/08/2025 14:37 - dangduong

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

    int A[n], B[n];

    rep(i, 0, n) cin >> A[i];
    rep(i, 0, n) cin >> B[i];

    pii p[n];

    rep(i, 0, n) p[i] = {B[i], A[i]};

    sort(p, p + n);

    int res = 0;

    int last = -1;

    rep(i, 0, n) if (p[i].second >= last) {
        res ++;
        last = p[i].first;
    };
    
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