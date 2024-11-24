#include <bits/stdc++.h>

using namespace std;

const int maxn = 100000 + 5;

#define int long long

int n, q;
int a[maxn];
int bit[maxn];


void update(int i, int v) {
    while (i <= n) {
        bit[i] += v;  
        i += (i & -i);     
    }
}


int sum(int i) {
    int s = 0;
    while (i > 0) {
        s += bit[i];  
        i -= i & -i;     
    }
    return s;
}

void solve() {

    int type, u, v;

    cin >> type >> u >> v;

    if (type == 1) {
        update(u, v);
    } else {
        cout << sum(v) - sum(u - 1) << endl;
    }
}

int32_t main() {

    cin >> n;
    for (int i = 1; i <= n ; i ++) {
        cin >> a[i];
        bit[i] = 0;
    }

    for (int i = 1; i <= n ; i ++) {
        update(i, a[i]);
    }

    cin >> q;

    while (q--)
    {
        solve();
    }
    




    return 0;
}