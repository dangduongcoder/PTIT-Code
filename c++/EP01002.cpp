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

    ll sum = 0;

    for (int i = 1 ; i <= n ; i ++) {
        ll t = 1;
        for (int j = 1 ; j <= i ; j ++) {
            t *= j;
        }

        sum += t;
    }

    cout << sum;
    

    return 0;
}