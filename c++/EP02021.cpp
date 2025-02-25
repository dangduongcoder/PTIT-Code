//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;


    int n, m, k;
    cin >> n >> m;   

    int a[n], b[m];

    for (int i = 0 ; i < n ; i ++) {
        cin >> a[i];
    }

    for (int i = 0 ; i < m ; i ++) {
        cin >> b[i];
    }

    cin >> k;

    for (int i = 0 ; i < n ; i ++) {
        if (i == k) {
            for (int j = 0 ; j < m ; j ++) {
                cout << b[j] << " ";
            }
        }
        cout << a[i] << " ";
    }

    if (k == n) {
        for (int j = 0 ; j < m ; j ++) {
                cout << b[j] << " ";
            }
    }

    return 0;
}