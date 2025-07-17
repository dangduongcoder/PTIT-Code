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
            cin.ignore();
        }

        getline(cin, sv.name);
        getline(cin, sv.sex);
        getline(cin, sv.bd);
        getline(cin, sv.dc);
        getline(cin, sv.mst);
        getline(cin, sv.date);

        return in;
    }

    friend ostream& operator<<(ostream &out, NhanVien &sv) {
        
        cout << (sv.index < 10 ? "0000" : "000") << sv.index << " ";
        cout << sv.name << " ";
        cout << sv.sex << " ";
        cout << sv.bd << " ";
        cout << sv.dc << " ";
        cout << sv.mst << " ";
        cout << sv.date << " ";
        cout << endl;
        
        return out;
    }

};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}