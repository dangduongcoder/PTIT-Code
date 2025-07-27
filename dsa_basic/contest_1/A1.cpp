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


const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;
const int N = 1e9+7;



bool check(pii a, pii b, pii c) {
    if (a.first == b.first && b.first == c.first) return false;
    if (a.second == b.second && b.second == c.second) return false;

    try
    {
        if (a.first/a.second == b.first/b.second && a.first/a.second == c.first/c.second) {
            return false;    
        }
    }
    catch(const std::exception& e)
    {
        return true;
    }
    
    return true;

}


int main() {
    fast_io;
    int n;

    cin >> n;

    vector<pii> v;

    pii tmp;

    int x, y;

    for (int i = 0 ; i < n ; i ++) {
        cin >> x >> y;
        tmp = mp(x, y);
        v.pb(tmp);
    }

    ll cnt = 0;

    for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(check(v[i], v[j], v[k])){
					cnt++;
				}
			}
		}
	}

    cout << cnt;

    return 0;
}