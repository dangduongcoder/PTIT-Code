//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n;
    cin >> n;
    int no = n;

    map<int, int> mp;

    for(int i = 2 ; i <= no ; i ++) {
        while (n % i == 0)
        {
            mp[i] ++;
            n /= i;
        }
        
    }

    for (pair<int, int> p : mp) {
        cout << p.first << " " << p.second << " ";
    }

    cout << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}