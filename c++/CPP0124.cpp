//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

}

int main() {
    fastio;

    ll n;
    cin >> n;

    for (ll i = 2; i * i <= n; i += (i == 2 ? 1 : 2)) {
        
        int cnt = 0;

        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        
        if (cnt) cout << i << " " << cnt << endl;
    }
    
    if (n > 1) cout << n << " 1" << endl;

    

    return 0;
}