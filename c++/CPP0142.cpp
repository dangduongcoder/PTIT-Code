//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

bool nt(int n) {
    if (n < 2) {
        return false;
    }

    if (n == 2 || n == 3) {
        return true;
    }

    if (n % 2 == 0) {
        return false;
    }

    for (int i = 3 ; i <= sqrt(n) ; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


int cnt(int n) {
    float r = n;

    for (int i = 2 ; i * i < n ; ++ i) {
        if (n % i == 0) {
            while (n % i == 0)
            {
                n /= i;
                r *= (1.0 - (1.0/ (float)i));
            }
        }
        
    }

    if (n > 1) {
        r -= r / n;
    }

    return (int)r;
}


void solve() {
    int n; 
    cin >> n;

    int c = cnt(n);

    if (nt(c)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}