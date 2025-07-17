//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    freopen("DATA.in", "r", stdin);

    string s;

    int cnt[1000 + 5];

    memset(cnt, 0, sizeof(cnt));

    while (getline(cin, s))
    {
        stringstream ss(s);

        string w;

        while (ss >> w)
        {
            int n = atoi(w.c_str());

            cnt[n] ++;
        }
        
    }

    for (int i = 0 ; i < 1000 + 5 ; i ++) {
        if (cnt[i] > 0) {
            cout << i << " " << cnt[i] << endl;
        }
    }
        

    return 0;
}