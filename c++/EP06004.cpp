//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

struct Student
{
    string name;
    string msv;
    int d;
    int m;
    int y;
    float gpa;
};

void input(struct Student &A) {
    getline(cin, A.name);
    getline(cin, A.msv);
    scanf("%d/%d/%d", &A.d, &A.m, &A.y);
    cin >> A.gpa;
}

void print(struct Student A) {
    cout << "B20DCCN001 ";
    cout << A.name << " ";
    cout << A.msv << " ";

    cout << (A.d < 10 ? "0" : "") << A.d << "/";
    cout << (A.m < 10 ? "0" : "") << A.m << "/";
    cout << A.y << " " << fixed << setprecision(2) << A.gpa;
}


int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}