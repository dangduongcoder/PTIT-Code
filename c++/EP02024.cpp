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
    int i = 0;


    while (cnt < n)
    {
        i ++;

        if (!(i % 3 == 0 || i % 10 == 3)) {
            cnt ++;
        }
    }

    cout << i;
       

    return 0;
}