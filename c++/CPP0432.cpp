//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

bool cmp(int a, int b) {

    string s1 = to_string(a);
    string s2 = to_string(b);

    int i = 0;

    while (i < s1.size() && i < s2.size())
    {
        if (s1[i] != s2[i]) {
            return s1[i] > s2[i];
        }
        i ++;
    }

    return true;
    
    
}

void solve() {

    int n;
    cin >> n;

    int arr[n];

    for (int &i : arr) {
        cin >> i;
    }

    sort(arr, arr + n, cmp);

    for (int i : arr) {
        cout << i << " ";
    }

    cout << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}