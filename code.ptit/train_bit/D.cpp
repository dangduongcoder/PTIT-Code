#include <bits/stdc++.h>

using namespace std;

const int maxn = 100 + 2;

#define int long long

int t, n, m;
int a[maxn][maxn][maxn];
int bit[maxn][maxn][maxn];


void update(int x, int y0, int z0, int v) {
    int y;
    int z;
    while (x <= n) {
        y = y0;
        while (y <= n) {
            z = z0;
            while (z <= n) {
                bit[x][y][z] += v;  
                z += (z & -z);     
            }
            y += (y & -y);
        }
        x += (x & -x);
    }
}


int sum(int x, int y0, int z0) {
    int s = 0;
    int y;
    int z;
    while (x > 0) {
        y = y0;
        while (y > 0) {
            z = z0;
            while (z > 0) {
                s += bit[x][y][z];  
                z -= z & -z;     
            }
            y -= y & -y;     
        }
        x -= x & -x;     
    }
    return s;
}

int getSumRange(int x1, int y1, int z1, int x2, int y2, int z2) {
    if (x1 > x2) {
        swap(x1, x2);
    }
    if (y1 > y2) {
        swap(y1, y2);
    }
    if (z1 > z2) {
        swap(z1, z2);
    }

    return  sum(x2, y2, z2) - sum(x1 - 1, y2, z2) - sum(x2, y1 - 1, z2) - sum(x2, y2, z1 - 1) + sum(x1 - 1, y1 - 1, z2) + sum(x1 - 1, y2, z1 - 1) + sum(x2, y1 - 1, z1 - 1) - sum(x1 - 1, y1 - 1, z1 - 1);

}


void solve() {
    memset(bit, 0, sizeof(bit));
    cin >> n >> m;
    

    for (int i = 0 ; i < m ; i ++) {
        string type;
        cin >> type;
        if (type == "UPDATE") {
            int x, y, z, val;
            cin >> x >> y >> z >> val;
            update(x, y, z, val - getSumRange(x, y, z, x, y, z));
        } else { 
            int x1, y1, z1, x2, y2, z2;
            cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
            cout << getSumRange(x1, y1, z1, x2, y2, z2) << endl;

        }
    }
    
}

int32_t main() {

    cin >> t;


    while (t--)
    {
        solve();
    }
    




    return 0;
}