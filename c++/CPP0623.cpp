//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


struct SinhVien {

    string name, msv, lop, mail;
    int khoa;

};


int main() {
    fastio;

    int n;
    cin >> n;

    // cin.ignore();

    struct SinhVien arr[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i].msv;
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].lop;
        cin >> arr[i].mail;
        arr[i].khoa = (arr[i].lop[1] - '0') * 10 + (arr[i].lop[2] - '0') ;
    }

    // cout << arr[n - 1].mail;


    int q;
    cin >> q;

    for (int i = 0 ; i < q ; i ++) {
        int t;
        cin >> t;

        cout << "DANH SACH SINH VIEN KHOA " << t << ":" << endl;

        t -= 2000;

        for (int j = 0 ; j < n ; j ++) {
            if (arr[j].khoa == t) {
                cout << arr[j].msv << " ";
                cout << arr[j].name << " ";
                cout << arr[j].lop << " ";
                cout << arr[j].mail << " ";
                cout << endl;
            }
        }

    }


    return 0;
}