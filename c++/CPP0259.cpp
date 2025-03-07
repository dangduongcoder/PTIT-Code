//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    int n, m, p;
    cin >> n >> m >> p;

    int A[n][m];
    int B[m][p];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0 ; i < m ; i ++) {
        for (int j = 0 ; j < p ; j ++) {
            cin >> B[i][j];
        }
    }

    int C[n][p];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < p ; j ++) {
            int t = 0;
            for (int k = 0 ; k < m ; k ++) {
                t += A[i][k] * B[k][j];
            }

            C[i][j] = t;
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < p ; j ++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}