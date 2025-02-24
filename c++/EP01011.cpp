//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;


    int a, b;
    cin >> a >> b;

    ll sum = 0;

    int ia = ceil(sqrt(a));
    int ib = floor(sqrt(b));


    for (int  i = ia ; i <= ib ; i ++) {
        sum += i * i;
    }

    // cout << ia << " " << ib;

    cout << sum;

    return 0;
}