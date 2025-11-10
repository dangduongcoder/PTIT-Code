// DSA07003.cpp - Created: 28/08/2025 00:13 - dangduong

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
    getline(cin, s);

    stack<int> st;

    for (char x : s) {
        if(x == '(') st.push(0);
        if(x == ')') if (st.top() > 1 && !st.empty()) st.pop();
        if(x != ')' && x != '(' && !st.empty()) {
            int tmp = st.top();
            st.pop();
            st.push(tmp + 1);
        }
    }

    if (st.empty()) cout << "No" << endl;
    else cout << "Yes" << endl;
}

int main() {
    fast_cin();
    int t = 1;
    cin >> t; 
    cin.ignore();
    while (t--) {
        solve();
    }
    return 0;
}