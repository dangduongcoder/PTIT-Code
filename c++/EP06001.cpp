//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

struct Point
{
    double x;
    double y;
};

void input(struct Point &P) {
    cin >> P.x >> P.y;
}

double distance(struct Point A, struct Point B) {
    return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}

int main(){
struct Point A, B;
int t;
cin>>t;
while(t--){
 input(A); input(B);
cout << fixed << setprecision(4) << distance(A,B) << endl;
}
return 0;
}