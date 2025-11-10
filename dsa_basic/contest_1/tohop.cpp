#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; 
    cin >> n >> k;

    int arr[k];
    for (int i = 0; i < k; i++) arr[i] = i + 1;

    while (1) {
        for (int i = 0; i < k; i++) cout << arr[i] << " ";
        cout << endl;

        int i = k - 1;
        while (i >= 0 && arr[i] == n - k + i + 1) i--;
        if (i < 0) break;
        arr[i]++;
        for (int j = i + 1; j < k; j++) arr[j] = arr[j - 1] + 1;
    }

    return 0;
}
