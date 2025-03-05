//Duong
#include <bits/stdc++.h>
using namespace std;



void solve() {

    char a101[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    char a102[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

    int md;
    cin >> md;


    char s;
    int total = 0;

    if (md == 101) {
        for (int i = 0 ; i < 15 ; i ++) {
            cin >> s;
            if (s == a101[i]) total ++;
        }
    } else {
        for (int i = 0 ; i < 15 ; i ++) {
            cin >> s;
            if (s == a102[i]) total ++;
        }
    }

    cout << fixed << setprecision(2) << (float)total/1.5 << endl;

}

int main() {
    int testCase; cin >> testCase;
    while (testCase --) {
        solve();
    }
    return 0;
}