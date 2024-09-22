

#include<stdio.h>


void solve(long long int n) {

    int t = 0;
    int c = 0;
    int l = 0;
    while (n != 0) {
        t = n % 10;
        n /= 10;

        c ++;

        if (t % 2 == 1) {
            l ++;
        }

    }

    if (l > c - l) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }



}


int main() {


    int n;

    scanf("%d", &n);

    long long int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0 ; i < n ; i ++) {
        solve(arr[i]);
    }



    return 0;
}







