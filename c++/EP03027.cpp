//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;


    string s;
    cin >> s;
    int len = s.size();

    if (s[len - 3] == '.' && (s[len - 2] == 'p' || s[len - 2] == 'P') && (s[len - 1] == 'y' || s[len - 1] == 'Y')) {
        cout << "yes";
        return 0;
    }

    cout << "no";

    return 0;
}