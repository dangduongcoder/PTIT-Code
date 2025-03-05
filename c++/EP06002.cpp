//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) {

    while (b != 0)
    {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }

    return a;
    

}

struct Fraction
{
    ll a;
    ll b;
};

void input(struct Fraction &A) {
    cin >> A.a >> A.b;
}

void simplify(struct Fraction &A) {
    
    ll g = gcd(A.a, A.b);
    // cout << A.a/g << "/" << A.b/g;
    A.a /= g;
    A.b /= g;
}

void print(struct Fraction &A) {
    cout << A.a << "/" << A.b;
}

int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}
