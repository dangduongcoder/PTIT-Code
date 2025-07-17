//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

int cnt = 1;

class NhanVien
{
private:
    /* data */
public:
    NhanVien(/* args */) {}
    ~NhanVien() {}

    string name, sex, bd, dc, mst, date;
    int index;

    friend istream& operator>>(istream &in, NhanVien &sv) {
        
        sv.index = cnt ++;

        if (sv.index == 1) {
            in.ignore();
        }

        getline(in, sv.name);
        getline(in, sv.sex);
        getline(in, sv.bd);
        getline(in, sv.dc);
        getline(in, sv.mst);
        getline(in, sv.date);

        return in;
    }

    friend ostream& operator<<(ostream &out, NhanVien &sv) {
        
        out << (sv.index < 10 ? "0000" : "000") << sv.index << " ";
        out << sv.name << " ";
        out << sv.sex << " ";
        out << sv.bd << " ";
        out << sv.dc << " ";
        out << sv.mst << " ";
        out << sv.date << " ";
        out << endl;
        
        return out;
    }

};

bool cmp(NhanVien a, NhanVien b) {
    string date1 = a.bd;
    string date2 = b.bd;

    int d1, d2, m1, m2, y1, y2;

    sscanf(date1.c_str(), "%d/%d/%d", &m1, &d1, &y1);
    sscanf(date2.c_str(), "%d/%d/%d", &m2, &d2, &y2);

    
    if (y1 < y2)return true;
    if (y1 == y2 && m1 < m2) return true;
    if (y1 == y2 && m1 == m2 && d1 < d2)return true;
    return false;


}

void sapxep(NhanVien* ds, int N) {
    sort(ds, ds + N, cmp);
}


int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}