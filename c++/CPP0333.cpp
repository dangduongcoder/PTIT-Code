//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;


    string s, t;
    getline(cin, s);

    stringstream ss(s);

    vector<string> w;

    while (ss >> t)
    {
        w.push_back(t);
    }
       
    for (int i = 0 ; i < w.size() - 1; i ++) {
        cout << (char)toupper(w[i][0]);
        for (int j = 1 ; j < w[i].size() ; j ++) {
            cout << (char)tolower(w[i][j]);
        }
        if (i == w.size() - 2) {
            cout << ", ";
        } else {
            cout << " ";
        }
    }


    for (int i = 0 ; i < w[w.size() - 1].size() ; i ++) {
        cout << (char)toupper(w[w.size() - 1][i]);
    }

    return 0;
}