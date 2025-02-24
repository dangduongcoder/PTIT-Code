//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    ll a, b;
    char t;
    double r;

    cin >> a >> t >> b;

    switch (t)
    {
    case '+':
        r = (float)a + b;
        break;
    case '-':
        r = (float)a - b;
        break;
    case '*':
        r = (float)a * b;
        break;
    case '/':
        r = (float)a / b;
        break;
    }

    cout << fixed << setprecision(2) << r;

    return 0;
}