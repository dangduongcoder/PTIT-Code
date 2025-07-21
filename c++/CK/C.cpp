#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll lcm(ll a, ll b) {
    return a * (b/__gcd(a, b));
}

void solve() {

    int x, y, z, n;

    cin >> x >> y >> z >> n;

    ll t = lcm(x, lcm(y, z));

    ll r = t*(int)floor((int)(pow(10, n - 1)/t) + 1);

    cout << (to_string(r).length() != n ? -1 : r) << endl;

}

int main() {


    int n;
    cin >> n ;

    while (n--)
    {
        solve();
    }
    

    return 0;
}