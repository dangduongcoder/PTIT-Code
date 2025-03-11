//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    char a101[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    char a102[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

    // string a101 = "ABBADC"

    int md;
    cin >> md;

    // int user[15];

    char s;
    int total = 0;

    if (md == 101) {
        for (int i = 0 ; i < 15 ; i ++) {
            cin >> s;
            if (s == a101[i]) {
                total ++;
            }
        }
    } else {
        for (int i = 0 ; i < 15 ; i ++) {
            cin >> s;
            if (s == a102[i]) {
                total ++;
            }
        }
    }

    cout << fixed << setprecision(2) << (float)total/1.5 << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}