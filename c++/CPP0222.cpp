//Duong
    #include <bits/stdc++.h>
    using namespace std;
    
    typedef long long ll;
    
    #define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    const int MOD = 1e9 + 7;
    const ll INF = 1e18;
    const int N = 1e5 + 5;


    void solve() {
    
        int cnt[N];

        for (int i = 0 ; i < N ; i ++) {
            cnt[i] = 0;
        }

        int n;
        cin >> n;

        int arr[n][n];

        for (int i = 0 ; i < n ; i ++) {
            for (int j = 0 ; j < n ; j ++) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0 ; i < n ; i ++) {
            set<int> s;
            for (int j = 0 ; j < n ; j ++) {
                s.insert(arr[i][j]);
            }

            for (int x: s) {
                cnt[x] ++;
            }
        }
        
        int r = 0;

        for (int i = 0 ; i < N ; i ++) {
            if (cnt[i] == n) {
                r ++;
            }
        }

        cout << r << endl;


    }
    
    int main() {
        fastio;
    
        int testCase; cin >> testCase;
    
        while (testCase --) {
            solve();
        }
        
    
        return 0;
    }