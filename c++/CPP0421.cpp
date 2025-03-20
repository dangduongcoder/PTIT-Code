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

    map<ll,bool>mp;


    for(int i=0; i<n; i++){
        ll t;
        cin >> t;
        mp[t] = true;
    }


    for(int i=0; i<n; i++) if(mp[i]) cout << i << " "; else cout << "-1" << " ";
    


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