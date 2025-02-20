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

// #define int ll

void solve() {

}

signed main() {
    fastio;

    string s;

    ll l, r;
    cin >> s >> l >> r;


    int len = sz(s);
    int arr[len * 2 + 1];

    int subSum = 0;

    ll sum = 0;

    for (int i = 0 ; i < len ; i ++) {
        arr[i] = s[i] - 48;
        arr[2*len - i - 1] = s[i] - 48;
        subSum += arr[i] * 2;
    }


    // for (int i = 0 ; i < len * 2 ; i ++) {
    //     cout << arr[i] << " ";
    // }

    //1 2 3 3 2 1 1 2 3 3 2   1  1  2 3 3 2 1 1 2 3 3 2 1
    //0 1 2 3 4 5 6 7 8 9 10 11 12 13

    ll startIndex = (l % (2*len) == 0) ? l % (2*len) : (l % (2*len)) - 1;
    ll endIndex = (r % (2*len) == 0) ? r % (2*len) : (r % (2*len)) - 1;

    // cout << l << " " << r << endl;
    
    for (int i = startIndex ; i < len*2 ; i ++) {
        sum += arr[i];
        l ++;
    }
    
    for (int i = endIndex ; i >= 0 ; i --) {
        sum += arr[i];
        r --;
    }

    ll loop = (r - l + 1)/(len*2);

    if (loop == 0) {
        
        if (startIndex <= endIndex) {
            sum = 0;
            for (int i = startIndex ; i <= endIndex ; i ++) {
                sum += arr[i];
            }
        } 
    } else {
        sum += subSum * loop;
    }

    // cout << l << " " << r << endl;

    cout << sum ;

    return 0;
}