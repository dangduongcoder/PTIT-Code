//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

struct PhanSo
{
    ll a, b;
};

long long gcd(ll a, ll b) {
    while (b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    
    return a;
}

void nhap(struct PhanSo &A) {
    cin >> A.a >> A.b;
}

struct PhanSo tong(struct PhanSo &A, struct PhanSo &B) {

    struct PhanSo r;

    r.a = A.a * B.b + B.a * A.b;
    r.b = A.b * B.b;

    return r;
}

void in (struct PhanSo A) {
    ll g = gcd(A.a, A.b);

    cout << A.a/g << "/" << A.b/g;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}