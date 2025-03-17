//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

class SinhVien {
    public: 
        string name;
        string lop;
        int d, m, y;
        float gpa;

        void nhap() {
            getline(cin, name);
            getline(cin, lop);
            scanf("%d/%d/%d", &d, &m, &y);
            cin >> gpa;
        }

        void xuat() {
            cout << "B20DCCN001 ";
            cout << name << " ";
            cout << lop << " ";
            cout << (d < 10 ? "0" : "") << d << "/";
            cout << (m < 10 ? "0" : "") << m << "/";
            cout << y << " ";
            cout << fixed << setprecision(2) << gpa;
        }
};




int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}