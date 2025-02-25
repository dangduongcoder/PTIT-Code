//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


struct Product
{
    int id;
    string name;
    string group;
    float profit;

};

bool cmp(struct Product p1, struct Product p2) {
    return p1.profit > p2.profit;
}

int main() {
    fastio;

    int n;
    cin >> n;

    cin.ignore();

    struct Product sp[n];

    for (int i = 0 ; i < n ; i ++) {
        string name, group;
        float mua, ban;

        getline(cin, name);
        getline(cin, group);
        cin >> mua >> ban;
        cin.ignore();

        sp[i] = {i + 1, name, group, ban - mua};

    }

    sort(sp, sp + n, cmp);

    for (int i = 0 ; i < n ; i ++) {
        cout << sp[i].id << " " << sp[i].name << " " << sp[i].group << fixed << setprecision(2) << " " << sp[i].profit << endl;
    }

    return 0;
}