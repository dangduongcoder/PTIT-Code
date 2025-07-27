#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5;

int cnt[N];

int main() {

    int t;
    cin >> t;

    while (t--)
    {

        memset(cnt, 0 , sizeof(cnt));

        int n;
        cin >> n;
        int arr[n];
        for(int &i : arr) {
            cin >> i;
            cnt[i] ++;
        }

        for (int i = 0 ; i < N ; i ++) {
            if (cnt[i] > 0 && cnt[i] % 2 == 1) {
                cout << i << endl;
                break;
            }
        }
    }
    

}