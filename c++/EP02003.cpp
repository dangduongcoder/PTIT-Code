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

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }

    // Binary search

    // int left = 0, right = n - 1;
    // while (left < right) {
    //     int mid = left + (right - left) / 2;

    //     if (mid > 0 && mid < n - 1) {
    //         if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1]) {
    //             cout << arr[mid] << endl;
    //             return;
    //         }
    //     }

    //     if (arr[mid] <= arr[mid + 1]) {  
    //         left = mid + 1;
    //     } else {
    //         right = mid;
    //     }
    // }

    cout << *max_element(arr, arr+n) << endl;

    



}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}