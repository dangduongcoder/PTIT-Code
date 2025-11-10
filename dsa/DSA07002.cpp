// DSA07002.cpp - Created: 29/08/2025 20:39 - dangduong

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

    stack<int> st;

    rep(i, 0, n) {
        string query;
        cin >> query;
        if (query == "PUSH") {
            int t;
            cin >> t;
            st.push(t);
        }

        if (query == "POP" && !st.empty()) st.pop();

        if (query == "PRINT") {
            if (st.empty()) {
                cout << "NONE" << endl;
            } else {
                // stack<int> tmp = st;
                // vector<int> v;
                // while (!tmp.empty()){
                //     v.push_back(tmp.top());
                //     tmp.pop();
                // }
                // reverse(all(v));
                // rep(i, 0, sz(v)) cout << v[i] << " ";
                // cout << endl;
                cout << st.top() << endl;
            }
            
        }
    }
}

int main() {
    fast_cin();
    int t = 1;
    // cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}