#include <bits/stdc++.h>

using namespace std;

#define long long ll

void solve() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }

    int m = -1;

    for (int i = 0 ; i < n ; i ++) {
        m = (m < arr[i] ? arr[i] : m );
    }

    cout << m << endl;

}

int main() {

    int n;
    cin >> n ;

    while (n--)
    {
        solve();
    }
    


    return 0;
}