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

    if (n <= 1) {
        cout << "NO";
        return 0;
    } 

    for (int i = 2 ; i * i <= n ; i ++) {
        if (n % i == 0) {
            cout << "NO";
            return 0;
        }
    }   

    cout << "YES";

    return 0;
}