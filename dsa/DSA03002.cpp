// DSA03002.cpp - Created: 26/08/2025 08:40 - dangduong

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define all(a) a.begin(), a.end()
#define sz(a) ((int)(a).size())
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define vi vector<int>
#define pii pair<int, int>
#define ll long long

const int MOD = 1e9 + 7;
const int N = 1e9;
const int INF = 1e9;
const ll LLINF = 1e18;

void solve() {
    int a, b;
    cin >> a >> b;

    string s1 = to_string(a), s2 = to_string(b);

    string min_s1 = s1, max_s1 = s1, min_s2 = s2, max_s2 = s2;

    rep(i, 0, sz(s1)) {
        if (min_s1[i] == '6') min_s1[i] = '5'; 
        if (max_s1[i] == '5') max_s1[i] = '6'; 
    }

    rep(i, 0, sz(s2)) {
        if (min_s2[i] == '6') min_s2[i] = '5'; 
        if (max_s2[i] == '5') max_s2[i] = '6'; 
    }

    cout << stoi(min_s1) + stoi(min_s2) << " ";
    cout << stoi(max_s1) + stoi(max_s2) << " ";
    
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