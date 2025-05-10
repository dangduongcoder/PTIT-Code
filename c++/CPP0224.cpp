//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

int a[100][100], n, m, checkX[] = {-1,-1,-1,0,0,1,1,1}, checkY[] = {-1,0,1,-1,1,-1,0,1};

void check(int i, int j) {
	if (i<0 || i>=n || j<0 || j>=m || !a[i][j]) return;
	a[i][j] = 0;
	for (int d = 0; d < 8; d++) check(i+checkX[d], j+checkY[d]);
}
/*


*/
void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];
	int s = 0;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++)
		if (a[i][j]) s++, check(i,j);
	cout << s << '\n';
}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}