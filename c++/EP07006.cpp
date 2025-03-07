//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    double x1, x2, x3, y1, y2, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double a1, a2, a3;

    a1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    a2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    a3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    if (a1 + a2 > a3 && a2 + a3 > a1 && a1 + a3 > a2) {
        cout << fixed << setprecision(3) << 0.25 * sqrt((a1 + a2 + a3)*(a1 + a2 - a3)*(a1 - a2 + a3)*(-a1 + a2 + a3)) << endl;
    } else {
        cout << "INVALID" << endl;
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