#include <bits/stdc++.h>
using namespace std;

void solve() {


    string s;
    cin >> s;

    stack<string> st;

    for (int i = 0 ; i < s.size() ; i ++) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string ch1 = st.top();
            st.pop();
            string ch2 = st.top();
            st.pop();
            st.push(ch1 + ch2 + to_string(s[i]));
        } else {
            st.push(to_string(s[i]));
        }
    }
    
    cout << st.top();
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}