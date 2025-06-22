//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;
const int N = 1e6;

int check(ll*A, ll*B, ll*D, int m, int n) {
    int count = 0, j = 0;
    for (int i = 0 ; i < m ; i ++) {

        while (A[i] < B[j] && i < m -1)
        {
            i ++;
        }
        while (A[i] > B[j] && j < n -1)
        {
            j ++;
        }

        if (A[i] == B[j]) {
            j ++;
            D[count ++] = A[i];
        }

        if (j >= n) {
            break;
        }
    }

    return count;
}

void solve() {
    int m, n, p;

    cin >> m >> n >> p;

    ll A[N], B[N], C[N], D[N], E[N];



    for (int i = 0 ; i < m ; i ++) {
        cin >> A[i];
    }
    for (int i = 0 ; i < n ; i ++) {
        cin >> B[i];
    }
    for (int i = 0 ; i < p ; i ++) {
        cin >> C[i];
    }

    int a = check(A, B, D, m, n);
    int b = check(D, C, E, a, p);

    if (b == 0) {
        cout << -1;
    } else {
        for (int i = 0 ; i < b ; i ++) {
            cout << E[i] << " ";
        }
    }

    cout << endl;
}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}