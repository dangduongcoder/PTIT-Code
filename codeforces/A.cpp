
//https://codeforces.com/contest/2048/problem/A

#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n;
    cin >> n;
    int arr[n];

    int max = -1;
    int min = 1e9 + 6;
    int sum = 0;


    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];

        sum += arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    if (sum % n == 0 && sum / n == (max + min) / 2 ){
        cout << "YES\n";
    } else {
        cout << "NO\n";
        // cout << sum << " " << max << " " << min << endl;
    }

}

int main() {

    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }
    // cout << 10 % 1;

    return 0;
}