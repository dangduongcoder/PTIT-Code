//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n;
    cin >> n;
    cin.ignore();
    string s, t;
    getline(cin, s);

    stringstream ss(s);

    vector<string> v;

    while (ss >> t)
    {
        int i = 0;
        for(char &c : t) {
            if (i == 0) {
                c = (c <= 'Z' && c >= 'A' ? c : c - 'a' + 'A');
            } else {
                c = (c <= 'z' && c >= 'a' ? c : c - 'A' + 'a');
            }
            i ++;
        }
        v.push_back(t);
    }
    
    if (n == 1) {
        cout << v[v.size() - 1] << " ";
        for (int i = 0 ; i < v.size() - 1 ; i ++) {
            cout << v[i] << " ";
        }
    } else {
        for (int i = 1 ; i < v.size()    ; i ++) {
            cout << v[i] << " ";
        }
        cout << v[0] << " ";
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