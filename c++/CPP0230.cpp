//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    int n;
    cin >> n;

    int cnt = 0;
    int a, b, c;

    for (int i = 0 ; i < n ; i ++) {
        cin >> a >> b >> c;

        if (a + b + c > 1) cnt ++; 
    }   

    cout << cnt;

    return 0;
}