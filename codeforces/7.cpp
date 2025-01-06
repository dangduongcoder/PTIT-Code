#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string masinhvien;
    int diem;
};


int main() {

    int n;
    cin >> n;

    struct SinhVien danhsach[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> danhsach[i].masinhvien >> danhsach[i].diem;
    }

    for (int i = 0 ; i < n - 1 ; i ++) {
        for (int j = i + 1 ; j < n ; j ++) {
            if (abs(danhsach[i].diem - danhsach[j].diem) == 10) {
                cout << danhsach[i].masinhvien << " " << danhsach[j].masinhvien << endl;
            }
        }
    }

    

    return 0;
}