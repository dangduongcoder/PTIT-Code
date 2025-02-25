//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    int m, n, k;

    cin >> m >> n >> k;

    int arr[n][m];

    for (int i = 0 ; i < m ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            cin >> arr[j][i]; 
        }
    }


    // for (int i = 0 ; i < k ; i ++) {
    sort(arr[k - 1], arr[k - 1] + m);
    // }

    // for (int i = 0 ; i < n ; i ++) {
    //     for (int j = 0 ; j < m ; j ++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0 ; i < m ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            cout << arr[j][i] << " "; 
        }
        cout << endl;
    }

    return 0;
}