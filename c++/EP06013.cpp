//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


ll gcd(ll a, ll b) {

    while (b != 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    
    return a;

}

void simple(ll &a, ll &b) {
    ll g = gcd(a, b);

    a = a / g;
    b = b / g;
}

void solve() {

    int t1, m1, t2, m2;
    cin >> t1 >> m1 >> t2 >> m2;

    ll b = m1/gcd(m1, m2) * m2;

    t1 = t1 * (b/m1);
    t2 = t2 * (b/m2);

    cout << t1 + t2  << endl;


}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}