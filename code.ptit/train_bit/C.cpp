#include <bits/stdc++.h>

using namespace std;

const int maxn = 1000 + 5;

#define int long long

int n, q;
int a[maxn][maxn];
int bit[maxn][maxn];


void update(int x, int y, int v) {
    int y0;
    while (x < maxn) {
        y0 = y;
        while (y0 < maxn) {
            bit[x][y0] += v;  
            y0 += (y0 & -y0);     
        }
        x += (x & -x);
    }
}


int sum(int x, int y) {
    int s = 0;
    int y0;
    while (x > 0) {
        y0 = y;
        while (y0 > 0) {
            s += bit[x][y0];  
            y0 -= y0 & -y0;     
        }
        x -= x & -x;     
    }
    return s;
}

int calc(int n) {
    if (n < 3) return 0; 
    return n*(n-2)*(n-1)/6;
}

void solve() {

    int type, x, y, a, b, u, v;

    cin >> type;

    if (type == 1) {
        cin >> x >> y;
        update(x, y, 1);
    } else {
        cin >> a >> b >> u >> v;
        int ans = sum(u, v) - sum(a - 1, v) - sum(u, b - 1) + sum(a - 1, b - 1);
        // cout << ans << endl;
        cout << calc(ans) << endl;
    }
}

int32_t main() {

    cin >> n;


    while (n--)
    {
        solve();
    }
    
    // for(int i = 0 ; i <= 10 ; i ++) {
    //     for (int j = 0 ; j <= 10 ; j ++) {
    //         cout << bit[i][j] << " ";
    //     }
    //     cout << endl;
    // }




    return 0;
}