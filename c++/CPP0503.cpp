//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) {
    while (b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }

    return a;
    
}

struct PhanSo
{
    ll a, b;
};

void nhap(struct PhanSo &A) {
    cin >> A.a >> A.b;
}

void rutgon(struct PhanSo &A) {
    ll g = gcd(A.a, A.b);

    A.a /= g;
    A.b /= g;
}

void in(struct PhanSo A) {
    cout << A.a << "/" << A.b;
}


int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}