#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    if (n <= 0) {
        cout << "-1";
        return 0;
    }

    double tong = 0;

    for (int i = 1 ; i <= n ; i ++) {
        tong += 1/pow(i, i);
    }

    cout << fixed << setprecision(5) << tong;

    return 0;
}