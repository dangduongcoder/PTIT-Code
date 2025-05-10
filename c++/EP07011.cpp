//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    string msv, name;

    float p1, p2, p3;

    cin >> msv;

    cin.ignore();

    getline(cin, name);

    cin >> p1 >> p2 >> p3;
    

    float bonus = 0;

    switch (msv[2]) {
        case '1':
            bonus = 0.5;
            break;
        case '2':
            bonus = 1.0;
            break;
        case '3':
            bonus = 2.5;
            break;
    default:
        break;
    }

    float p = p1 * 2 + p2 + p3;

    cout << msv << " " << name << " ";

    if (bonus == 1.0) {
        cout << setprecision(0) << fixed << bonus << " ";
    } else {
        cout << setprecision(1) << fixed << bonus << " ";
    }

    if (p - (int)p > 0) {
        cout << setprecision(1) << fixed << p << " ";
    } else {
        cout << setprecision(0) << fixed << p << " ";
    }

    if (p + bonus < 24) {
        cout << "FAILED";
    } else {
        cout << "PASSED";
    }

    return 0;
}