// DSA03010.cpp - Created: 26/08/2025 14:06 - dangduong

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

    multiset<int> se;

    rep(i, 0, n) {
        int t;
        cin >> t;
        se.insert(t);
    }

    ll res = 0;

    while (sz(se) != 1)
    {
        int a = *se.begin(); se.erase(se.begin());
        int b = *se.begin(); se.erase(se.begin());

        se.insert(a + b);

        res += a + b;
    }

    // res += *se.begin();

    // cout << *se.begin() << " " << se.size() << endl;
    
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