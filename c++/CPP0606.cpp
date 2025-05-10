//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const int MOD = 1e9 + 7;
const ll INF = 1e18;


class NhanVien
{
private:
    string name, sex, bd, add, sdt, date;
public:
    friend istream& operator >> (istream &in, NhanVien &p) {
        getline(in, p.name);
        in >> p.sex >> p.bd;
        in.ignore();
        getline(in, p.add);
        in >> p.sdt >> p.date;
        return in;
    }

    friend ostream& operator >> (ostream &out, const NhanVien &p) {

        out << "00001" << " " << p.name << " " << p.sex << " " << p.bd << " " << p.add <<  " ";
        out << p.sdt << " " << p.date;


        return out;
    }
};


int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}