//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


struct TS
{
    int h;
    int m;
    int s;
    int ss;
};


bool cmp(struct TS a, struct TS b) {
    return a.ss < b.ss;
}

int main() {
    fastio;


    int n;
    cin >> n;

    struct TS times[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> times[i].h >> times[i].m >> times[i].s;

        times[i].ss = times[i].h * 3600 + times[i].m * 60 + times[i].s;
    }

    sort(times, times + n , cmp);

    for (int i = 0 ; i < n ; i ++) {
        cout << times[i].h << " " << times[i].m << " " << times[i].s << endl;
    }

    return 0;
}