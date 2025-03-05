//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;



int main() {
    fastio;

    int m, s;
    cin >> m >> s;

    if (s > 9 * m || (s == 0 && m > 1)) {
        cout << "-1 -1" << endl;
        return 0;
    }

    if (s == 0 && m == 1) {
        cout << "0 0" << endl;
        return 0;
    }

    string minNum(m, '0');
    int sLeft = s;
    
    int soDau = max(1, sLeft - 9 * (m - 1));
    minNum[0] = '0' + soDau;
    sLeft -= soDau;
    
    for (int i = m - 1; i > 0; i--) {
        int num = min(9, sLeft);
        minNum[i] = '0' + num;
        sLeft -= num;
    }

    string maxNum(m, '0');
    sLeft = s;
    
    for (int i = 0; i < m; i++) {
        int num = min(9, sLeft);
        maxNum[i] = '0' + num;
        sLeft -= num;
    }

    cout << minNum << " " << maxNum << endl;
    

    return 0;
}