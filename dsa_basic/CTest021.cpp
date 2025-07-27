#include <bits/stdc++.h>

using namespace std;

int primes[1000 + 5];

void init() {

    for (int i = 0 ; i < 1000 + 5 ; i ++) {
        primes[i] = 1;
    }

    primes[0] = primes[1] = 0;

    for (int i = 2 ; i <= sqrt(1000 + 5) ; i ++) {
        if (primes[i]) {
            for (int j = i * i; j < 1000 + 5; j += i)
            {
                primes[j] = 0;
            }
            
        }
    }

}


int main() {

    init();

    int t;
    cin >> t;
    while (t--)
    {
        int n, t;
        cin >> n;

        set<int> se;

        for (int i = 0 ; i < n ; i ++) {
            cin >> t;
            if (primes[t]) {
                se.insert(t);
            }
        }

        for (int i : se) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    
    

}