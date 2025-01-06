#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    int tongcannang = 0;

    int tam = 0;

    for (int i = 1 ; i <= n ; i ++) {
        for (int j = 1 ; j <= n ; j ++) {
            cin >> tam;
            if (i % 2 == 0 && j % 2 == 0) {
                tongcannang += tam;
            }
        }
    }

    cout << tongcannang;


    return 0;
}