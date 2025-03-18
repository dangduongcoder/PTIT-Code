//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    ll n;
    cin >> n;

    ll n1 = n;

    bool prime = true;

    for(int i = 2 ; i * i <= n1 ; i ++) {
        
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
            prime = false;
        }
        
    }

    if (prime) cout << n; 
    cout << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}