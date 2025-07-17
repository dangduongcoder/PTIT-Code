//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    freopen("VANBAN.in", "r", stdin);

    string s;

    set<string> se;

    while (getline(cin, s))
    {
        string w;
        stringstream ss(s);

        while (ss >> w) 
        {

            for (char &a : w) {
                a = tolower(a);
            }

            se.insert(w);
        }
    }

    for (string w : se) {
        cout << w << endl;
    }
    

    return 0;
}