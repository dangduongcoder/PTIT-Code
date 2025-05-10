//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    string name, bd;
    float p1, p2, p3;

    getline(cin, name);
    cin >> bd >> p1 >> p2 >> p3;

    cout << name << " " << bd << " " << fixed << setprecision(1) << p1 + p2 + p3;
    

    return 0;
}