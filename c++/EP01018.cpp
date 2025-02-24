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
        ll t = a % b;
        a = b;
        b = t;
    }
    

    return a;
}

int numSum(ll n) {
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    
    return sum;
}

void solve() {

    ll n;
    cin >> n;
    while (gcd(n, numSum(n)) <= 1)
    {
        n ++;
    }

    cout << n << endl;
    

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}