//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n;
    cin >> n;

    int arrA[n], arrB[n];

    for (int &i : arrA) cin >> i;
    for (int &i : arrB) cin >> i;

    int sumA[n]; sumA[0] = arrA[0];
    int sumB[n]; sumB[0] = arrB[0];

    for (int i = 1 ; i < n ; i ++) {
        sumA[i] = sumA[i - 1] + arrA[i];
        sumB[i] = sumB[i - 1] + arrB[i];
    }

    int r = -1;

    for (int i = 0 ; i < n ; i ++) {
        if (sumA[i] == sumB[i]) r = i + 1 > r ? i + 1 : r;
        for (int j = 0 ; j < i ; j ++) {
            if (sumA[i] - sumA[j] == sumB[i] - sumB[j]) r = i + 1 > r ? i + 1 : r;
        }
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