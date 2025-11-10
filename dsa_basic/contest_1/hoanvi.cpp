#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) a[i] = i + 1;

    while (1) {
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;

        int i = n - 2;
        while (i >= 0 && a[i] > a[i + 1]) i--;
        if (i < 0) break;

        int j = n - 1;
        while (a[j] < a[i]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n);
    }

    return 0;
}
