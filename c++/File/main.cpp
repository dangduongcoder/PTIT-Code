//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    int k;
    cin >> n >> k;

    vector<int> r;

    while (n >= k)
    {
        r.push_back(n % k);
        n = n / k; 
    }

    r.push_back(n);

    for (int i = r.size() - 1 ; i >= 0 ; i -- ) {
        cout << (r[i] < 10 ? (char)(r[i] + '0') : (char)('A' + r[i] - 10));
    }

    cout << endl;
    
}

int main() {
    // fastio;

    // freopen("Input.inp", "r", stdin);   
    // freopen("Output.out", "w", stdout); 

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}