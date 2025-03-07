//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) {
    while (b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }

    return a;

}

int main() {
    fastio;


    ll a, b;
    cin >> a >> b;

    ll g = gcd(a, b);

    cout << a/g << "/" << b/g;


    return 0;
}