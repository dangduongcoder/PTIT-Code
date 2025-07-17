//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

bool check (string s) {
    if (s.length() > 9) {
        return false;
    }

    for (char a : s) {
        if (!(a <= '9' && a >= '0')) {
            return false;
        }
    }

    return true;
}

int main() {
    fastio;

    freopen("DATA.in", "r", stdin);

    string s;
    

    ll sum = 0;

    while (getline(cin, s))
    {
        stringstream ss(s);
        string w;

        while (ss >> w)
        {
            // cout << w << endl;
            if (check(w)) {
                sum += atoi(w.c_str());
            }
        }
        

    }
    
    cout << sum;

    return 0;
}