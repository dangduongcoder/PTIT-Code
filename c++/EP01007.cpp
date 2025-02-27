//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


ll gcd(ll a, ll b) {
    while(b) {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

ll power10(int exp) {
    ll res = 1;
    for (int i = 0; i < exp; i++) {
        res *= 10;
    }
    return res;
}

void solve(){
    ll X, Y, Z;
    int N;
    cin >> X >> Y >> Z >> N;
    
    ll l = lcm(X, lcm(Y, Z));
    
    ll low = power10(N - 1);
    ll high = power10(N) - 1;
    
    ll r = ((low + l - 1) / l) * l;
    
    cout << (r <= high ? r : -1) << endl;
}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}