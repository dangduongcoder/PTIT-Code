#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n, k;
    cin >> n >> k;

    int arr[k];

    for (int i = 1 ; i <= k ; i ++) arr[i - 1] = i;

    int cnt = 0;

    for (int i = 0 ; i < k ; i ++) cout << arr[i] << " ";
    cout << endl;
    
    while (cnt != k) {

        for (int i = k - 1 ; i >= 0 ; i --) {
            if (arr[i] < n - i + 1) {
                arr[i] ++;
                for (int j = i + 1 ; j < k ; j ++) {
                    arr[j] = arr[j - 1] + 1;
                }
                break;
            } 
        }

        for (int i = 0 ; i < k ; i ++) cout << arr[i] << " ";
        cout << endl;

        for (int i = n - k + 1 ; i <= n ; i ++) 
            if (arr[i - (n - k + 1)] == i) 
                cnt ++; 
    }
    


    return 0;
}