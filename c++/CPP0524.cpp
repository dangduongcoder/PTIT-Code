//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;




struct SinhVien {
    string msv;
    string name;
    string lop;
    float d1,d2,d3;
};

bool cmp (struct SinhVien a, struct SinhVien b) {
    return a.msv.compare(b.msv) < 0;
}

void nhap(struct SinhVien &sv) {
    cin.ignore();
    // cin >> sv.lop;
    getline(cin, sv.msv);
    getline(cin, sv.name);
    // cin >> sv.lop;
    getline(cin, sv.lop);
    cin >> sv.d1 >> sv.d2 >> sv.d3;
    
}

void sap_xep(struct SinhVien ds[], int n) {
    sort(ds, ds+n, cmp);
}

void in_ds (struct SinhVien ds[], int n) {
    for (int i = 0 ; i < n ; i ++) {
        cout << i + 1 << " ";
        cout << ds[i].msv << " ";
        cout << ds[i].name << " ";
        cout << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].d1 << " ";
        cout << fixed << setprecision(1) << ds[i].d2 << " ";
        cout << fixed << setprecision(1) << ds[i].d3 << " ";
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}