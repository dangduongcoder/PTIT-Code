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

    int n;
    cin >> n;

    if (n == 1) {
        cout << "*";
        return 0;
    }

    n -= 2;

    for (int i = 0 ; i <= n ; i ++) cout << " ";
    cout << "*" << endl;

    for (int i = 1 ; i <= n + 1 ; i ++) {
        cout << (i == n + 1 ? "" : " ");
        for (int j = 1 ; j <= n - i ; j ++) cout << " ";
        cout << "*";
        for (int j = 0; j < i*2 - 1 ; j ++) cout << " ";
        cout << "*";
        cout << endl;
    }
    for (int i = n ; i > 0 ; i --) {
        cout << (i == n + 1 ? "" : " ");
        for (int j = 1 ; j <= n - i ; j ++) cout << " ";
        cout << "*";
        for (int j = 0; j < i*2 - 1 ; j ++) cout << " ";
        cout << "*";
        cout << endl;
    }
    for (int i = 0 ; i <= n ; i ++) cout << " ";
    cout << "*" << endl;

    return 0;
}