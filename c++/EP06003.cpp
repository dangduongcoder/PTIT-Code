//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


struct Examinee
{
    string name;
    string bd;
    float total;
};


void input(struct Examinee &A) {
    getline(cin, A.name);
    getline(cin, A.bd);

    float score;
    A.total = 0;
    cin >> score;

    A.total += score;

    cin >> score;

    A.total += score;

    cin >> score;

    A.total += score;

}

void print(struct Examinee &A) {
    cout << A.name << " " << A.bd << " " << fixed << setprecision(1) << A.total;
}


int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}