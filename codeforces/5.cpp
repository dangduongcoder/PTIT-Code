#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, h;

    cin >> n >> h;

    int tam = 0;
    int dai = 0;

    for (int i = 0 ; i < n ; i ++) {
        cin >> tam;
        if (tam <= h) {
            dai += 1;
        } else {
            dai += 2;
        }
    }

    cout << dai;

    
    return 0;
}