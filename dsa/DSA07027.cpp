// DSA07027.cpp - Created: 28/08/2025 12:20 - dangduong

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
    vector<long long> arr(n);  
    rep(i, 0, n) cin >> arr[i];

    vector<long long> res(n, -1);
    stack<long long> st;  

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if (!st.empty()) {
            res[i] = st.top();
        } else {
            res[i] = -1;
        }

        st.push(arr[i]);
    }

    rep(i, 0, n) cout << res[i] << " ";
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