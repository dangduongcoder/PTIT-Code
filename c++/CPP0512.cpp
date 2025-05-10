//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


struct PhanSo {

    ll tu, mau;

};

ll gcd(ll a, ll b) {
    while (b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }

    return a;
    
}

void simple(struct PhanSo &A) {
    ll g = gcd(A.tu, A.mau);

    A.tu /= g;
    A.mau /= g;
}

void process(struct PhanSo A, struct PhanSo B) {
    PhanSo C;
    C.tu = pow(A.tu*B.mau + B.tu*A.mau, 2);
    C.mau = pow(A.mau * B.mau, 2);

    simple(C);

    PhanSo D;
    D.tu = A.tu * B.tu * C.tu;
    D.mau = A.mau * B.mau * C.mau;

    simple(D);

    cout << C.tu << "/" << C.mau << " ";
    cout << D.tu << "/" << D.mau << " ";

    cout << endl;

}


int main() {
    int t;
    cin >> t;
    while (t--) {
    	PhanSo A;
    	PhanSo B;
    	cin >> A.tu >> A.mau >> B.tu >> B.mau;
    	process(A, B);
    }


    // cout << gcd(5, 10);

}