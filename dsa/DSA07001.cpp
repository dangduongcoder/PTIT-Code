// DSA07001.cpp - Created: 28/08/2025 00:00 - dangduong

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
    stack<int> s;
    string q;
    int t;
    while (cin >> q)
    {
        if (q == "push") {
            cin >> t;
            s.push(t);  
        }
        if (q == "show") {
            if(s.empty()) {
                cout << "empty" << endl;
            } else {
                stack<int> ts = s;
                vector<int> v;
                while (!ts.empty()){
                    v.push_back(ts.top());
                    ts.pop();
                }
                reverse(all(v));
                rep(i, 0, sz(v)) cout << v[i] << " ";
                cout << endl;
            }
            
        }
        if (q == "pop") {
            s.pop();
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