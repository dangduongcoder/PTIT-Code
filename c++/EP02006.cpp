//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

// #define int long long

void solve() {

    int n, m;
    cin >> n >> m;

    vector<int> A1(n), A2(m);
    
    set<int> cnt;

    for (int &x : A1) {
        cin >> x;
        cnt.insert(x);
    }

    A1.push_back(0);

    for (int &x : A2) cin >> x;

    A1.push_back(0);


    ll sum = 0;

    vector<int> chung;


    for (int &x : A2) {
        if (cnt.count(x) > 0) {
            chung.push_back(x);
        }
    }

    chung.push_back(0);

    int i = 0, j = 0, sum1 = 0, sum2 = 0;
    vector<int> s1, s2;

    for (int &x : chung) {
        // cout << x << " ";
        sum1 = sum2 = 0;
        while (A1[i] != x && i < n)
        {
            sum1 += A1[i++];
        }
        while (A2[j] != x && j < m)
        {
            sum2 += A2[j++];
        }
        
        

        sum += max(sum1, sum2) + x;
        i ++;
        j ++;
        // cout << sum1 << " " << sum2 << endl;

    }
    // cout << sum1 << " " << sum2 << endl;

    // sum += max(sum1, sum2);

    cout << sum << endl;

}

int32_t main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}