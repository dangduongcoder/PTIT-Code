//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, m;
    cin >> n >> m;
    vector<int> A1(n);
    vector<int> A2(m);
    for (int i = 0; i < n; i++) {
        cin >> A1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> A2[i];
    }
    int i = 0, j = 0;
    ll sum1 = 0, sum2 = 0, total = 0;
    while (i < n && j < m) {
        if (A1[i] < A2[j]) {
            sum1 += A1[i];
            i++;
        } else if (A2[j] < A1[i]) {
            sum2 += A2[j];
            j++;
        } else {
            total += max(sum1, sum2) + A1[i];
            sum1 = 0;
            sum2 = 0;
            i++;
            j++;
        }
    }
    while (i < n) {
        sum1 += A1[i];
        i++;
    }
    while (j < m) {
        sum2 += A2[j];
        j++;
    }
    total += max(sum1, sum2);
    cout << total << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}