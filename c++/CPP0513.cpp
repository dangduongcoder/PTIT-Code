//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


struct SinhVien
{
    string name, cls;
    int id, d, m, y;
    float gpa;
};

void nhap(struct SinhVien arr[], int n){
    for (int i = 0 ; i < n ; i ++) {
        arr[i].id = i + 1;
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].cls;

        scanf("%d/%d/%d", &arr[i].d, &arr[i].m, &arr[i].y);

        cin >> arr[i].gpa;
    }
}

void in (struct SinhVien arr[], int n) {
    for (int i = 0 ; i < n ; i ++) {
        cout << "B20DCCN0" << (arr[i].id <= 9 ? "0" : "") << arr[i].id << " ";
        cout << arr[i].name << " " << arr[i].cls << " ";
        cout << (arr[i].d <= 9 ? "0" : "") << arr[i].d << "/";
        cout << (arr[i].m <= 9 ? "0" : "") << arr[i].m << "/";
        cout << arr[i].y << " ";
        cout << fixed << setprecision(2) << arr[i].gpa;
        cout << endl;
    }
}


int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}