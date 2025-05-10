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

    int arr[n];

    for(int &i : arr) {
        cin >> i;
    }

    int a, b;
    cin >> a >> b;

    
    int l = a , r = b;

    for (int i = a ; i < b ; i ++) {
        if (arr[i] <= arr[i + 1]) {
            l ++;
        } else {
            break;
        }
    }

    for (int i = b ; i > a ; i --) {
        if (arr[i] <= arr[i - 1]) {
            r --;
        } else {
            break;
        }
    }

    // cout << l << " " << r;

    cout << (l == r ? "Yes" : "No");


    cout << "\n";

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}