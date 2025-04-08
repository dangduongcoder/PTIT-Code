//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

struct Person
{
    string name;
    int d;
    int m;
    int y;
};

bool cmp(struct Person a, struct Person b) {

    return (
        a.y > b.y ||
        a.y == b.y && a.m > b.m || 
        a.y == b.y && a.m == b.m && a.d > b.d
    
    );
    // return a.y == b.y && a.m > b.m;
    // return a.y == b.y && a.m == b.m && a.d > b.d;

}

int main() {
    fastio;

    int n;
    cin >> n;

    cin.ignore();

    struct Person list[n];

    for (int i = 0 ; i < n ; i ++) {
        string name;
        string date;
        cin >> name >> date;

        list[i].name = name;

        // string sd = "" + date[0] + date[1];
        // string sm = "" + date[3] + date[4];
        // string sy = "" + date[6] + date[7] + date[8] + date[9];

        // int d = stoi(sd);
        // int m = stoi(sm);
        // int y = stoi(sy);

        list[i].d = 10*(date[0]-'0') + (date[1]-'0');
        list[i].m = 10*(date[3]-'0') + (date[4]-'0');
        list[i].y = 1000*(date[6]-'0') + 100*(date[7]-'0') + 10*(date[8]-'0') + (date[9]-'0');

        // cout << list[i].d << " " << list[i].m << " " << list[i].y << endl;
    }

    sort(list, list + n, cmp);

    cout << list[0].name << endl << list[n - 1].name;
    

    return 0;
}