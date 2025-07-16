//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, j, k, targer, cnt = 0, __min = 200000 + 9, __max = -1;

    cin >> n >> j >> k;

    int arr[n]; 

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
        __min = (arr[i] < __min ? arr[i] : __min);
        __max = (arr[i] > __max ? arr[i] : __max);
    }

    targer = arr[j - 1];

    for (int i = 0 ; i < n ; i ++) {
        if (targer == arr[i]) {
            cnt ++;
        }
    }

    // cout << targer << " " << __min << " " << __max << endl;

    if (k == 1) {
        cout << (targer == __max ? "YES" : "NO") << endl;

    } else {
        
        // if (targer == __min && cnt == 1) {
        //     cout << "NO" << endl;
        // } else {
        //     cout << "YES" << endl;
        // }
        cout << "YES" << endl;
    }


    // __min = min(arr, arr + n);

    // int hash[200000 + 9];

    // memset(hash, 0, sizeof(hash));



}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}