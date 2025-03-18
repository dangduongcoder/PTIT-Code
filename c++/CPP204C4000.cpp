//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

struct SinhVien
{
    string name;
    string lop;
    int d, m, y;
    float gpa;
};

void nhapThongTinSV(struct SinhVien &A) {
    getline(cin, A.name);
    cin >> A.lop;
    scanf("%d/%d/%d", &A.d, &A.m, &A.y);
    cin >> A.gpa;
}

void inThongTinSV(struct SinhVien &A) {
    cout << "N20DCCN001 ";
    cout << A.name << " ";
    cout << A.lop << " ";
    cout << (A.d < 10 ? "0" : "") << A.d << "/";
    cout << (A.m < 10 ? "0" : "") << A.m << "/";
    cout << A.y << " ";
    cout << fixed << setprecision(2) << A.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}