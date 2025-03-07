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

    ll a, b;
    string c;

    cin >> a >> b >> c;

    if (a <= 0 || b <= 0) {
        cout << "INVALID";
        return 0;
    }

    cout << a + a + b + b << " " << a * b << " ";

    cout << (char)toupper(c[0]);

    for (int i = 1 ; i < c.size() ; i ++) {
        cout << (char)tolower(c[i]);
    }

    return 0;
}