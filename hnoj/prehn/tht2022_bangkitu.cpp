#include <bits/stdc++.h>
using namespace std;


void solve() {

    int n, m, k;
    cin >> m >> n >> k;

    int cA = 0;
    int cB = 0;

    int max = 0;

    string s;

    for(int i = 0 ; i < m ; i ++) {
        cin >> s;
        for (int j = 0 ; j < n ; j ++) {
            if (s[j] == 'A') cA ++; else cB ++;
        }
    }

    cout << cA << " " << cB << endl;



}

int main() {

    int n;
    cin >> n;

    while (n--) solve();
    
    

    return 0;
}