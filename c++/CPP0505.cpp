//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

struct NhanVien
{
    string name, sex, bd, add, num, date;
};

void nhap(struct NhanVien &A) {
    getline(cin, A.name);
    getline(cin, A.sex);
    getline(cin, A.bd);
    getline(cin, A.add);
    getline(cin, A.num);
    getline(cin, A.date);
}

void in(struct NhanVien &A) {
    cout << "00001" << " ";
    cout << A.name << " ";
    cout << A.sex << " ";
    cout << A.bd << " ";
    cout << A.add << " ";
    cout << A.num << " ";
    cout << A.date << " ";
}



int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}