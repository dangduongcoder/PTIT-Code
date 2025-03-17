//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

int indexxx = 1;

struct NhanVien {

    int id;
    string name;
    string sex;
    string bd;
    string add;
    string mst;
    string date;
};

void nhap(struct NhanVien &A) {

    if (indexxx == 1) {
        cin.ignore();
    }
    A.id = indexxx ++;
    getline(cin, A.name);
    getline(cin, A.sex);
    getline(cin, A.bd);
    getline(cin, A.add);
    getline(cin, A.mst);
    getline(cin, A.date);

}

void inds(struct NhanVien ds[],int n) {
    for (int i = 0 ; i < n ; i ++) {
        string t = to_string(ds[i].id);
        for (int j = 0 ; j < 5 - t.size() ; j ++) {
            cout << "0";
        }
        cout << ds[i].id << " ";
        cout << ds[i].name << " ";
        cout << ds[i].sex << " ";
        cout << ds[i].bd << " ";
        cout << ds[i].add << " ";
        cout << ds[i].mst << " ";
        cout << ds[i].date << endl;
    }
}


int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}