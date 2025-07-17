//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

int cnt = 1;

class SinhVien
{
private:
    /* data */
public:

    int index;
    string name;
    string lop;
    int d, m, y;
    float gpa;

    SinhVien(/* args */);
    ~SinhVien();

    friend istream& operator>>(istream &in, SinhVien &sv) {
        cin.ignore();
        sv.index = cnt ++;
        getline(cin, sv.name);
        getline(cin, sv.lop);
        scanf("%d/%d/%d", &sv.d, &sv.m, &sv.y);

        cin >> sv.gpa;

        return in;
    }

    friend ostream& operator<<(ostream &out, const SinhVien &sv) {


        cout << "B20DCCN0" << (sv.index < 10 ? "0" : "") << sv.index <<  " ";
        cout << sv.name << " ";

        cout << sv.lop << " ";
        cout << (sv.d < 10 ? "0" : "") << sv.d << "/";
        cout << (sv.m < 10 ? "0" : "") << sv.m << "/";
        cout << sv.y << " ";
        cout << fixed << setprecision(2) << sv.gpa << " ";
        cout << endl;
        return out;
    }
};

SinhVien::SinhVien(/* args */)
{
}

SinhVien::~SinhVien()
{
}



int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}