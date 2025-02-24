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

    int arr[90 + 5];
    int map[n + 2];

    for (int i = 0 ; i < 90 + 5 ; i ++) {
        arr[i] = 0;
    }

    int t;

    map[0] = 0;
    map[n + 1] = 91;

    for (int i = 0 ; i < n ; i ++) {
        cin >> map[i + 1];
    }

    for (int i = 0 ; i < n + 1 ; i ++) {
        if (map[i + 1] - map[i] > 15) {
            cout << map[i] + 15;
            return 0;
        }
    }

    cout << 90;
    

    return 0;
}