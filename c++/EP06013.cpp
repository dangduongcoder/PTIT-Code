//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

// #define ll ll

ll T;

struct Fraction {
    ll num;
    ll den;
};

ll gcd(ll a, ll b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        ll temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void simplify(Fraction &f) {
    ll gcd_val = gcd(f.num, f.den);
    f.num /= gcd_val;
    f.den /= gcd_val;
    if (f.den < 0) {
        f.num *= -1;
        f.den *= -1;
    }
}

Fraction add(Fraction a, Fraction b) {
    Fraction res;
    res.num = a.num * b.den + b.num * a.den;
    res.den = a.den * b.den;
    simplify(res);
    return res;
}

Fraction multiply(Fraction a, Fraction b) {
    Fraction res;
    res.num = a.num * b.num;
    res.den = a.den * b.den;
    simplify(res);
    return res;
}

void read_input(Fraction &f) {
    cin >> f.num >> f.den;
}

void prll_fraction(Fraction f) {
    cout << f.num << "/" << f.den;
}

void process(Fraction A, Fraction B) {
    Fraction sum_ab = add(A, B);
    Fraction c = multiply(sum_ab, sum_ab);
    Fraction product_ab = multiply(A, B);
    Fraction d = multiply(product_ab, c);
    prll_fraction(c);
    cout << " ";
    prll_fraction(d);
    cout << endl;
}





int main() {
	ll t;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}