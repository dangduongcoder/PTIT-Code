//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

struct ThiSinh
{
    string name;
    string bd;
    float s1, s2, s3;
};


void nhap(struct ThiSinh &A) {
    getline(cin, A.name);
    getline(cin, A.bd);
    cin >> A.s1 >> A.s2 >> A.s3;
}

void in(struct ThiSinh A) {
    cout << A.name << " ";
    cout << A.bd << " ";
    cout << fixed << setprecision(1) << A.s1 + A.s2 + A.s3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}