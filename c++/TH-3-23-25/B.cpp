//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


bool check(int n) {
    int c = 0, l = 0;

    while (n)
    {
        int r = n % 10;
        c += r % 2 == 0;
        l += r % 2 == 1;
        n /= 10;
    }
    
    return c == l;

}


int main() {
    fastio;


    int n;
    cin >> n;
    int cnt = 0;

    for (int i = pow(10, n - 1) ; i <= pow(10, n) - 1 ; i ++) {
        if (check(i)) {
            cout << i << " ";
            cnt ++;
        }
        if (cnt >= 10) {
            cout << endl;
            cnt = 0;
        }
    }


    return 0;
}