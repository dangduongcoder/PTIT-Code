//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

const vector<vector<int>> e = {
    {}, {}, 
    {1,0,0,0}, {1,1,0,0}, {3,1,0,0}, {3,1,1,0}, 
    {4,2,1,0}, {4,2,1,1}, {7,2,1,1}, {7,4,1,1}
};

void solve() {
    int n; string s;
    cin >> n >> s;
    
    int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
    for (char c : s) {
        int d = c - '0';
        if (d < 2) continue;
        c2 += e[d][0];
        c3 += e[d][1];
        c5 += e[d][2];
        c7 += e[d][3];
    }
    
    string r;
    vector<pair<int, vector<int>>> d = {
        {9, {7,4,1,1}}, {8, {7,2,1,1}}, {7, {4,2,1,1}}, 
        {6, {4,2,1,0}}, {5, {3,1,1,0}}, {4, {3,1,0,0}}, 
        {3, {1,1,0,0}}, {2, {1,0,0,0}}
    };
    
    for (auto [x, v] : d) {
        int m = INT_MAX;
        if (v[0]) m = min(m, c2/v[0]);
        if (v[1]) m = min(m, c3/v[1]);
        if (v[2]) m = min(m, c5/v[2]);
        if (v[3]) m = min(m, c7/v[3]);
        
        if (m > 0) {
            r += string(m, '0'+x);
            c2 -= v[0]*m;
            c3 -= v[1]*m;
            c5 -= v[2]*m;
            c7 -= v[3]*m;
        }
    }
    
    cout << (r.empty() ? "0" : r) << '\n';
}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}