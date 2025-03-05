//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    int n;
    cin >> n;

    set<int> se;

    for (int i = 0 ; i < n ; i ++) {
        int t;
        cin >> t;
        se.insert(t);
    }   

    for (int i : se) {
        cout << i << " ";
    }

    return 0;
}