// DSA02001.cpp - Created: 27/08/2025 23:42 - dangduong

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define all(a) a.begin(), a.end()
#define sz(a) ((int)(a).size())
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a-1; i>=b; --i)
#define vi vector<int>
#define pii pair<int, int>
#define ll long long

const int MOD = 1e9 + 7;
const int N = 1e9;
const int INF = 1e9;
const ll LLINF = 1e18;

void solve() {
    int n;
    cin >> n;

    int arr[n];

    rep(i, 0, n) cin >> arr[i];

    int i = n;

    while (i > 1) {

        cout << "[";
        rep(j, 0, i) cout << arr[j] << (j != i - 1 ? " " : "");
        cout << "]" << endl; 

        rep(j, 0, i) {
            arr[j] = arr[j] + arr[j + 1];
        }
        i --;
    }

    cout << "[" << arr[0] << "]" << endl;
    
}

int main() {
    fast_cin();
    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}