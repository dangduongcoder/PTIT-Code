#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n;
    cin >> n;
    
    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }

    int check[n + 1];

    for (int i = 0 ; i <= n ; i ++) {
        check[i] = 0;
    }

    for (int i = 0 ; i < n ; i ++) {
        check[arr[i]] += check[arr[i]] == 0 ? 1 : 0;
    }

    int c = 1;

    for (int i = 0 ; i < n ; i ++) {
        // 

        if (check[arr[i]] == 1) {
            cout << arr[i] << " ";
            check[arr[i]] ++;
        } else { 
            for (int j = c ; j <= n ; j ++) {
                if (check[j] == 0) {
                    cout << j << " ";
                    check[j] ++;
                    c = j + 1;
                    break;
                }
            }
        }
    }

    cout << endl;

}

int main () {

    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }
    


    return 0;
}