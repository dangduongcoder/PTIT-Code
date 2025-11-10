// DSA07021.cpp - Created: 28/08/2025 11:35 - dangduong

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
    string s;
    cin >> s;

    stack<pii> st;

    int res = 0;
    int ok = true;
    rep(i, 0, sz(s)) {
        if (s[i] == '(') st.push({'(', i});
        else {
            if (!st.empty() && st.top().first == '(') {
                st.pop();
            } else {
                st.push({')', i});
            }
        }
    }

    vector<pii> v;

    v.push_back({0,sz(s)});

    while (!st.empty()){
        pii tmp = st.top();
        v.push_back(tmp);
        st.pop();
    }

    res = 0;

    // v.push_back({0,-1});
    if(v[sz(v) - 1].second != 0) v.push_back({0,-1});

    // rep(i, 0, sz(v)) cout << v[i].first << "|" << v[i].second << " ";
    
    rep(i, 0, sz(v) - 1) {
        res = max(res, v[i].second - v[i + 1].second - 1);
    }

    cout << res;
    
    cout << endl;

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