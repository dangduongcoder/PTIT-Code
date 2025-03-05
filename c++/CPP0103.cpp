//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    int n;
    cin >> n;

    double s = 0;

    for (int i = 1 ; i <= n ; i ++) {
        s += (double)1/(i);
    }

    cout << fixed << setprecision(4) << s;
    

    return 0;
}