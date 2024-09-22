
#include<stdio.h>



void solve(long long int n) {
    int t = 0;
    while (n != 0) {
        t = n % 10;
        n /= 10;

        if (t % 2 == 1) {
            printf("NO\n");
            return;
        }

    }

    printf("YES\n");
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






