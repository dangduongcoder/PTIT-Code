#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define debug(x) cerr << #x << " = " << x << endl;

const int MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {

    freopen("KHOASO.INP","r", stdin);
    freopen("KHOASO.OUT","w", stdout);
    
    int pwd[4] = {2, 0, 2, 5};

    int arr[4];

    for (int i = 0 ; i < 4 ; i ++) {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0 ; i < 4 ; i ++) {
        for (int j = 0 ; j <= 9 ; j ++) {
            if ((arr[i] + j) % 10 == pwd[i] || (arr[i] - j) % 10 == pwd[i]) {
                sum += j;
                // cout << j << endl;
                break;
            }
        }
    }

    cout << sum;


    return 0;
}