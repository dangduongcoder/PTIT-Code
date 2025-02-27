//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

int proc(int n) {
    while (n % 2 == 0)
    {
        n /= 2;
    }

    while (n % 3 == 0)
    {
        n /= 3;
    }
    
    return n;
    
}

void solve() {

    int a, b;

    cin >> a >> b;

    a = proc(a);
    b = proc(b);

    // cout << a << " " << b << endl;
    cout << (a == b ? "YES" : "NO") << endl;


}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}