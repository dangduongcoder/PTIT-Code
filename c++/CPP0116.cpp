//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

const int N = 10000 + 7;

int arr[N];

void init() {
    memset(arr, 0, sizeof(arr));

    arr[0] = -1; arr[1] = 1;

    for (int i = 2 ; i * i <= N ; i ++) {
        if (arr[i] == 0) {
            for (int j = i * i ; j <= N ; j += i) {
                if (arr[j] == 0) {
                    arr[j] = i;
                }
            }
        }
    }

}


void solve() {

    int n;
    cin >> n;

    for (int i = 1 ; i <= n ; i ++) {
        cout << (arr[i] == 0 ? i : arr[i]) << " ";
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