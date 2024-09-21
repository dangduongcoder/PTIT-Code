#include<bits/stdc++.h>

using namespace std;

#define MAX 101


int a[MAX][MAX], f[MAX][MAX];

int m, n;

int main() {
	
	cin >> m >> n;
	
	for (int i = 0 ; i < m ; i ++) {
		for (int j = 0 ; j < n ; j ++) {
			cin >> a[i][j];
			f[i][j] = a[i][j];
		}
	}
	
	for (int i = 1; i < n ; i ++) {
		for (int j = 0 ; j < m ; j ++) {
			if (j == 0) {
				f[j][i] = f[j][i] + max(f[j][i-1], f[j+1][i-1]);
			} else if (j == m - 1) {
				f[j][i] = f[j][i] + max(f[j][i-1], f[j-1][i-1]);
			} else {
				f[j][i] = f[j][i] + max(max(f[j][i-1], f[j-1][i-1]), f[j+1][i-1]);
			}
		}
	}
	
	int max = -1000000;
	
	for (int i = 0 ; i < m ; i ++) {
		if (f[i][n - 1] > max) max = f[i][n - 1];
		// cout << f[i][n - 1] << " ";
	}
	
	cout << max;
	
	
	return 0;
}