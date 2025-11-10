// #include <stdio.h>
#include<bits/stdc++.h>

using namespace std;


void solve() {

    vector<string> v;

    string s;

    int n;
    int step = 1;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n - 1 ; i ++) {
        s = "";
        for (int j = i + 1 ; j < n ; j ++) {
            if (arr[j] < arr[i]) {
                int t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
        // printf("Buoc %d: ", step ++);
        s = "Buoc " + to_string(step ++) + ": ";
        for (int j = 0; j < n; j++)
        {
            // printf("%d ", arr[j]);
            s += to_string(arr[j]) + " ";
        }
        // printf("\n");
        v.push_back(s);
        
    }

    for(int i = 0 ; i < v.size() ; i ++) {
        cout << v[i] << endl;
    }
    
}

int main() {

    int n = 1; 
    while (n--)
    {
        solve();
    }
    


    return 0;
}