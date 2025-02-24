//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

ll sumSum(ll n) {

    ll sum = 0;

    while ( n!= 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
    

}

void solve() {

    string s;
    cin >> s;

    ll sum = 0;

    for (int i = 0 ; i < s.size() ; i ++) {
        sum += s[i] - '0';
    }


    while (sum > 9)
    {
        sum = sumSum(sum);
    }
    

    cout << (sum == 9) << endl;


}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}