//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

int sumnum(ll n) {

    int s = 0;

    while (n)
    {
        s += n % 10;
        n /= 10;
    }

    return s;
    

}

void solve() {

    ll n;
    cin >> n;

    while (sumnum(n) > 9)
    {
        n = sumnum(n);
    }

    cout << sumnum(n) << endl;
    

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}