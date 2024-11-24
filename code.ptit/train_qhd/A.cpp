#include <bits/stdc++.h>
using namespace std;

int arr[20][20];  
int dp[1 << 20];     


int countBit(int x) {
    int count = 0;
    while (x) {
        count += (x & 1);  
        x >>= 1;  
    }
    return count;
}

void solve() {
    int N;
    cin >> N;  


    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> arr[i][j];
        }
    }


    fill(dp, dp + (1 << N), -1e9);
    dp[0] = 0;  


    for (int mask = 0; mask < (1 << N); ++mask) {
        int row = countBit(mask);  


        for (int col = 0; col < N; ++col) {
            if (!(mask & (1 << col))) {  
                int new_mask = mask | (1 << col);  
                dp[new_mask] = max(dp[new_mask], dp[mask] + arr[row][col]);
            }
        }
    }


    cout << dp[(1 << N) - 1] << endl;

}


int main() {
    int T;
    cin >> T;  
    while (T--) {
        solve();
    }
    return 0;
}