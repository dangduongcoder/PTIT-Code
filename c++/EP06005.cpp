//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


struct Employee {

    string id = "00001";
    string name;
    string sex;
    string bd;
    string addr;
    string tax;
    string date;

};


void input(struct Employee &A) {
    getline(cin, A.name);
    getline(cin, A.sex);
    getline(cin, A.bd);
    getline(cin, A.addr);
    getline(cin, A.tax);
    getline(cin, A.date);
}

void print(struct Employee &A) {
    cout << A.id << " ";
    cout << A.name << " ";
    cout << A.sex << " ";
    cout << A.bd << " ";
    cout << A.addr << " ";
    cout << A.tax << " ";
    cout << A.date << " ";
}

int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}