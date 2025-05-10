//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


class SinhVien
{
private:
    string ten;
    string msv;
    // string bd;
    int d, m, y;

    float gpa;
public:

    friend istream& operator>>(istream& in, SinhVien& sv);
    friend ostream& operator<<(ostream& out, const SinhVien& sv);
    
};

istream& operator>>(istream& in, SinhVien& sv) {
    getline(in, sv.ten);
    in >> sv.msv;
    // in >> sv.bd;
    scanf("%d/%d/%d", &sv.d, &sv.m, &sv.y);
    in >> sv.gpa;
    in.ignore(); 
    return in;
}

ostream& operator<<(ostream& out, const SinhVien& sv) {
    out << "B20DCCN001 ";
    out << sv.ten << " ";
    out << sv.msv << " ";
    // out << sv.bd << " ";
    out << (sv.d < 10 ? "0" : "") << sv.d << "/";
    out << (sv.m < 10 ? "0" : "") << sv.m << "/";
    out << sv.y << " ";
    out << fixed << setprecision(2) << sv.gpa << " ";
    return out;
}


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}