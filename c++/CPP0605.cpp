//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


ll gcd(ll a, ll b) {
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

class PhanSo {
private:
    ll tu, mau;

public:
    // Constructor
    PhanSo(ll t = 0, ll m = 1) {
        tu = t;
        mau = m;
    }

    void rutgon() {
        ll g = gcd(abs(tu), abs(mau));
        tu /= g;
        mau /= g;

        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }

    friend istream& operator >> (istream &in, PhanSo &p) {
        in >> p.tu >> p.mau;
        return in;
    }

    friend ostream& operator << (ostream &out, const PhanSo &p) {
        out << p.tu << "/" << p.mau;
        return out;
    }
};



int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

