//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

int arr[1000 + 5];

void init() {

    for (int i = 0 ; i < 1000 + 5 ; i ++) {
        arr[i] = 0;
    }

    arr[0] = 1;
    arr[1] = 1;

    int s1 = 1;
    int s2 = 1;

    while (s2<= 1000 + 5)
    {
        int t = s1 + s2;
        // cout << t << ", ";
        arr[t] = 1;
        s1 = s2;
        s2 = t;
    }
}

void solve() {

    int n;
    cin >> n;
    int a[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> a[i];
    }

    for (int i = 0 ; i < n ; i ++) {
        if (arr[a[i]]) {
            cout << a[i] << " ";
        }
    }

    cout << endl;

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