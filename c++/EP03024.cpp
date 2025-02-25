//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

const int N = 100 + 5;

int main() {
    fastio;

    int cnt[N];

    for (int i = 0 ; i < N ; i ++) {
        cnt[i] = 0;
    }

    string s; cin >> s;

    int c = 0;

    for (int i = 0 ; i < s.size() ; i ++) {
        cnt[c] ++;
        if (s[i] != s[i + 1]) {
            c ++;
        }
    }

    for (int i = 0 ; i < N ; i ++) {
        // cout << cnt[i] << endl;
        if (cnt[i] >= 7) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";


    return 0;
}