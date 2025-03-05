//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


struct SinhVien {

    int id;
    string msv;
    string name;
    string cls;
    float s1;
    float s2;
    float s3;
};


bool cmp(struct SinhVien A, struct SinhVien B) {
    return A.name.compare(B.name) < 0;
}

int main() {
    fastio;

    int n;
    cin >> n;

    struct SinhVien sv[n];

    for (int i = 0 ; i < n ; i ++) {
        cin.ignore();
        sv[i].id = i + 1;
        getline(cin, sv[i].msv);
        getline(cin, sv[i].name);
        getline(cin, sv[i].cls);
        cin >> sv[i].s1;
        cin >> sv[i].s2;
        cin >> sv[i].s3;
        
    }


    sort(sv, sv + n, cmp);

    for (int i = 0 ; i < n ; i ++) {
        cout << i + 1 << " ";
        cout << sv[i].msv << " ";
        cout << sv[i].name << " ";
        cout << sv[i].cls << " ";
        cout << fixed << setprecision(1);
        cout << sv[i].s1 << " ";
        cout << sv[i].s2 << " ";
        cout << sv[i].s3 << " ";
        cout << endl;
    }

    return 0;
}