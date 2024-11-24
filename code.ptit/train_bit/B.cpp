#include <bits/stdc++.h>

using namespace std;

const int maxn = 100000 + 5;

#define int long long

int n, q;
int a[maxn];
int bit[maxn];
int diff[maxn];


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

    int type, u, v, val;

    cin >> type;

    if (type == 1) {
        cin >> u >> v >> val;
        update(u, val);
        update(v + 1, -val);
    } else {
        cin >> u;
        cout << sum(u) << endl;
    }
}

int32_t main() {

    cin >> n;
    for (int i = 1; i <= n ; i ++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n ; i ++) {
        diff[i] = a[i] - a[i - 1];
    }

    for (int i = 1; i <= n ; i ++) {
        update(i, diff[i]);
    }

    cin >> q;

    while (q--)
    {
        solve();
    }
    




    return 0;
}