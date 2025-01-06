#include <stdio.h>


long long arr[1000];

void init() {
    arr[0] = 0; arr[1] = 1;
    for (int i = 2; i < 1000 ; i ++) arr[i] = arr[i - 1] + arr[i - 2];
}

void solve() {

    long long n;
    scanf("%lld", &n);

    int ok = 0;
    for (int i = 0 ; i < 1000 ; i ++) {
        if (arr[i] == n) {
            ok = 1;
            break;
        }
    }

    if (ok == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main () {

    init();

    int n ; 
    scanf("%d", &n);
    while (n--) solve();
    
    return 0;
}