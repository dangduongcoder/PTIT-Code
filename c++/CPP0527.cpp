//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

struct time {

    int h, m, s;

};

bool cmp(struct time a, struct time b) {
    if (a.h != b.h) {
        return a.h < b.h;
    } else if (a.m != b.m) {
        return a.m < b.m;
    } else {
        return a.s < b.s;
    }
}

int main() {
    fastio;

    int n;
    cin >> n;

    struct time list[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> list[i].h >> list[i].m >> list[i].s;
    }
    
    sort(list, list + n, cmp);

    for (int i = 0 ; i < n ; i ++) {
        cout << list[i].h << " " << list[i].m << " " << list[i].s << endl;
    }

    return 0;
}