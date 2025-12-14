#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>=b; --i)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;
const int N = 1e9+7;

int n;
long long arr[107];
int bit[107];
bool ok = false;

long long total;            
long long sumNeed;          
long long prefixRemaining[107];  
long long sum1_current = 0; 

void Try(int i) {
    if (ok) return;

    if (sum1_current > sumNeed) return;

    if (sum1_current + prefixRemaining[i] < sumNeed) return;

    if (i == n) {
        if (sum1_current == sumNeed && sum1_current != 0)
            ok = true;
        return;
    }

    bit[i] = 1;
    sum1_current += arr[i];
    Try(i + 1);
    sum1_current -= arr[i];

    bit[i] = 0;
    Try(i + 1);
}


void solve() {
    cin >> n;

    total = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    if (total % 2 != 0) {
        cout << "NO\n";
        return;
    }

    sumNeed = total / 2;

    sort(arr, arr + n, greater<long long>());

    prefixRemaining[n] = 0;
    for (int i = n - 1; i >= 0; i--)
        prefixRemaining[i] = prefixRemaining[i + 1] + arr[i];

    ok = false;
    sum1_current = 0;

    Try(0);

    cout << (ok ? "YES\n" : "NO\n");
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}