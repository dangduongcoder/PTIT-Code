//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;



struct Goods {
    int id;
    string name, type;
    float mua, ban;
    float loinhuan;
};

bool cmp(struct Goods A, struct Goods B) {
    return A.loinhuan > B.loinhuan;
}

int main() {
    fastio;

    int n;

    cin >> n;   
    cin.ignore();

    struct Goods arr[n];

    for (int i = 0 ; i < n ; i ++) {
        arr[i].id = i + 1;
        getline(cin, arr[i].name);
        getline(cin, arr[i].type);
        cin >> arr[i].mua >> arr[i].ban;
        cin.ignore();
        arr[i].loinhuan = arr[i].ban - arr[i].mua;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0 ; i < n ; i ++) {
        cout << arr[i].id << " ";
        cout << arr[i].name << " ";
        cout << arr[i].type << " ";
        cout << fixed << setprecision(2) << arr[i].loinhuan << endl;

    }

    return 0;
}