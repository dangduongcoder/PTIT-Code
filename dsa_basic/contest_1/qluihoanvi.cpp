#include <bits/stdc++.h>
using namespace std;

int n, a[100], used[100];

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (!used[j]) {
            a[i] = j;
            used[j] = 1;
            if (i == n) {
                for (int t = 1; t <= n; t++) cout << a[t] << " ";
                cout << endl;
            } else Try(i + 1);
            used[j] = 0;
        }
    }
}

int main() {
    cin >> n;
    Try(1);
    return 0;
}
