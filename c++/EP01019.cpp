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
        ll t = a;
        a = b;
        b = t % b;
    }

    return a;
    
}

int main() {
    fastio;

    ll a, b, c, d;

    cin >> a >> b >> c >> d;

    ll mi = min(min(a, b), min(c, d));

    ll e = gcd(
        gcd(a - mi, b - mi),
        gcd(c - mi, d - mi)
    );
    
    cout << e;

    return 0;
}