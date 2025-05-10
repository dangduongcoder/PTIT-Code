//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

struct NhanVien {

    int id;
    string name, add, mst, date, sex;
    int d, m, y;

};

bool cmp(struct NhanVien A, struct NhanVien B) {
    if (A.y == B.y) {
        if (A.m == B.m) {
            return A.d > B.d;
        } else {
            return A.m > B.m;
        }
    } else {
        return A.y > B.y;
    }
}

int main() {
    fastio;

    int n;
    cin >> n;
    cin.ignore();
    struct NhanVien arr[n];

    for (int i = 0 ; i < n ; i ++) {
        arr[i].id = i + 1;
        getline(cin, arr[i].name);
        cin >> arr[i].sex;
        scanf("%d/%d/%d", &arr[i].d, &arr[i].m, &arr[i].y);
        cin.ignore();
        getline(cin, arr[i].add);
        cin >> arr[i].mst >> arr[i].date;
    }
    
    // sort(arr, arr + n, cmp);

    for (int i = 0 ; i < n ; i ++) {
        cout << arr[i].id << " ";
        cout << arr[i].name << " ";
        cout << arr[i].sex << " ";  
        cout << arr[i].d << "/" << arr[i].m << "/" << arr[i].y << " ";
        cout << arr[i].add << " ";
        cout << arr[i].mst << " ";
        cout << arr[i].date << endl;


    }
    

    return 0;
}