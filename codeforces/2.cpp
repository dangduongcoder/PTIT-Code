#include <bits/stdc++.h>

using namespace std;

int main() {

    double tien;
    int ngay;

    cin >> tien >> ngay;

    if (ngay <= 0 || tien <= 0) {
        cout << "-1";
        return 0;
    }
    int loai1 = 0, loai2 = 0, loai3 = 0;

    for (int i = 1 ; i <= ngay ; i ++) {
        if (i <= 10) {
            loai1 ++;
        }

        if (i >= 11 && i <= 20) {
            loai2 ++;
        }

        if (i > 20) {
            loai3 ++;
        }
    }
    
    double phat = tien * loai1 * 0.002 + tien * loai2 * 0.005 + tien * loai3 * 0.01;

    cout << fixed << setprecision(2) << phat ;

    return 0;
}