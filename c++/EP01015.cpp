//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int arr[200];

void init() {
    for (int i = 0 ; i < 200 ; i ++) {
        arr[i] = 1;
    }

    arr[0] = 0; arr[1] = 0;

    for (int i = 2 ; i * i < 200 ; i ++) {
        if (arr[i]) {
            for (int j = i * i ; j < 200 ; j += i) {
                arr[j] = 0;
            }
        }
    }
}


int sumNum(ll n) {
    int sum = 0 ;


    while (n!= 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
    
}

void solve() {

    ll n;
    cin >> n;

    cout << (arr[sumNum(n)] ? n : -1) << endl;

}

int main() {
    fastio;

    init();

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}