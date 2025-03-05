//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double s = sqrt((a - c)*(a - c) + (b - d)*(b - d));

    cout << fixed << setprecision(4) << s << endl;

}

int main() {
    // fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}