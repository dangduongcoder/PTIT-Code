//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, m, k; 
    cin >> n >> m >> k;

    int arr[n][m];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            cin >> arr[i][j];
        }
    }

    int dir = 0; // 0 phai, 1 xuong, 2 trai, 3 phai
    int x = 0, y = 0;

    int maxX = n, maxY = m, minX = 0, minY = 0;

    for (int i = 1 ; i <= k ; i ++) {


        // cout << arr[y][x] << "(" << y << "," << x << ")" << " ";
        cout << arr[y][x] << " ";


        switch (dir) {
            case 0:
                if (x == maxX - 1) {
                    dir = 1;
                    // cout << "break(" << x << ")";
                    x --;
                    y ++;
                    
                }
                x ++;
                break;
            case 1:
                if (y == maxY - 1) {
                    dir = 2;
                    y --;
                    x ++;
                }
                y ++;
                break;
            case 2:
                if (x <= minX) {
                    dir = 3;
                    x ++;
                    y --;
                }
                x --;
                break;
            case 3:
                if (y < minY) {
                    dir = 0;
                    y ++;
                    x --;
                    maxX --;
                    maxY --;
                    minX ++;
                    minY ++;
                }
                y --;
                break;
            default:
                break;
        }

        

    }

    cout << endl << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}