#include <bits/stdc++.h>
using namespace std;

int n, k, a[100];

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            for (int t = 1; t <= k; t++) cout << a[t] << " ";
            cout << endl;
        } else Try(i + 1);
    }
}

int main() {
    cin >> n >> k;
    a[0] = 0;
    Try(1);
    return 0;
}
