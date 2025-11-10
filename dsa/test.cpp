#include <bits/stdc++.h> 
using namespace std; 
int k; char c; int n; 
int a[100]; void out(){ for(int i = 1; i <= k; i++){ cout<<char(a[i] + 'A' - 1); } cout<<endl; } void Try(int m){ for(int i = a[m - 1]; i <= n; i++){ a[m] = i; if(m == k) out(); else Try(m + 1); } } int main(){ cin >> c; n = int(c - 'A' + 1); cin>>k; a[0] = 1; Try(1); return 0; }