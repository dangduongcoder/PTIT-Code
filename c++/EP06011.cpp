//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

struct Student
{
    int index;
    string msv;
    string name;
    string cls;
    string mail;
    string group;
};


bool cmp (struct Student A, struct Student B) {
    return A.msv.compare(B.msv) < 0;
}


int main() {
    fastio;

    int n;
    cin >> n;
    cin.ignore();
    
    map<string, vector<struct Student>> mp;

    struct Student tmp;

    for (int i = 1 ; i <= n ; i ++) {
        tmp.index = i;
        getline(cin, tmp.msv);
        getline(cin, tmp.name);
        getline(cin, tmp.cls);
        getline(cin, tmp.mail);
        getline(cin, tmp.group);

        mp[tmp.group].push_back(tmp);
    }

    cin >> n;

    while (n--)
    {
        string t;
        cin >> t;
        int len = mp[t].size();

        sort(mp[t].begin(), mp[t].end(), cmp);

        for (int i = 0 ; i < mp[t].size() ; i ++) {
            cout << mp[t][i].index << " ";
            cout << mp[t][i].msv << " ";
            cout << mp[t][i].name << " ";
            cout << mp[t][i].cls << " ";
            cout << mp[t][i].mail << " ";
            cout << mp[t][i].group << " ";
            cout << endl;
        }
    }
    


    return 0;
}