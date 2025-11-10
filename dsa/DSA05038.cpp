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



int n, res;
map<int,int> dp[100005];

bool ok(int k,int x,int y){
    auto it=dp[k].lower_bound(x);
    if(it==dp[k].begin()) return 0;
    it--;
    return it->second<y;
}

void add(int k,int x,int y){
    auto it1=dp[k].lower_bound(x), it2=it1;
    while(it2!=dp[k].end() && it2->second>=y) it2++;
    dp[k].erase(it1,it2);
    dp[k][x]=y;
}



void solve() {
    cin>>n;
    add(0,INT_MIN,INT_MIN);
    rep(i,0,n){
        int x,y;cin>>x>>y;
        int l=0,r=res;
        while(l<=r){
            int m=(l+r)/2;
            if(ok(m,x,y)) l=m+1;
            else r=m-1;
        }
        if(res==l-1) res=l;
        add(l,x,y);
    }
    cout<<res;

}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}