#include <bits/stdc++.h>

using namespace std;

bool songuyento (int n) {
    if (n < 2) return false;

    if (n == 2 || n == 3) return true;

    for (int i = 2 ; i * i <= n ; i ++) {
        if (n % i == 0) return false; 
    }  

    return true;
}

int main() {

    int n;
    cin >> n;

    int dem = 0;

    for (int i = 2 ; i < n ; i ++) {
        if (songuyento(i)) {
            cout << i << " ";
            dem ++;
        }
    }

    if (dem == 0) {
        cout << "-1";
    }
    

    return 0;
}