#include <bits/stdc++.h>
using namespace std;



int main() {

    // arr[]: 1 2 5 4 6 2
    // dp[] : 1 2 3 3 4 2
    

    int n; cin >> n;

    int arr[n];

    int dp[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
        dp[i] = 1;
    };

    for (int i = 1 ; i < n ; i ++) 
        for (int j = 0; j < i ; j ++) 
            if (arr[j] < arr[i]) 
                dp[i] = max(dp[i], dp[j] + 1);

    cout << *max_element(dp, dp + n);
        

    return 0;
}