//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    string sen, word, s;

    getline(cin, sen);
    cin >> word;

    stringstream ss(sen);

    while (ss >> s)
    {

        if (s != word) {
            cout << s << " ";
        }
    }
    
    

    return 0;
}