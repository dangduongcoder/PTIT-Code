//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    string s1, s2, mi1, mi2, ma1, ma2;
    cin >> s1 >> s2;

    mi1 = ma1 = s1;
    mi2 = ma2 = s2;

    for(char &i : mi1) if (i == '6') i = '5';
    for(char &i : mi2) if (i == '6') i = '5';
    for(char &i : ma1) if (i == '5') i = '6';
    for(char &i : ma2) if (i == '5') i = '6';

    cout << stoll(mi1) + stoll(mi2) << " ";
    cout << stoll(ma1) + stoll(ma2) << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}