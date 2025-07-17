//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


struct SinhVien
{
    string lop, ten, msv, mail;
};


bool cmp (struct SinhVien a, struct SinhVien b) {
    if (a.lop == b.lop) {
        return a.msv.compare(b.msv) < 0;
    }
    return a.lop.compare(b.lop) < 0;
}

int main() {
    fastio;

    int n;

    cin >> n;

    struct SinhVien sv[n];

    // cin.ignore();

    for (int i = 0 ; i < n ; i ++) {
        cin >> sv[i].msv;
        cin.ignore();
        getline(cin,sv[i].ten);
        cin >> sv[i].lop;
        cin >> sv[i].mail;
    }

    sort(sv, sv + n , cmp);

    for (int i = 0 ; i < n ; i ++) {
        cout << sv[i].msv << " ";
        cout << sv[i].ten << " ";
        cout << sv[i].lop << " ";
        cout << sv[i].mail << endl;
    }

    return 0;
}