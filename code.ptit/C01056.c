


#include<stdio.h>


void solve(long long int n) {

    int m = 9;
    int t;
    while (n != 0) {
        t = n % 10;

        if (t > m) {
            printf("NO\n");
            return;
        } else {
            n /= 10;
            m = t;
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
        //printf("%lld\n", arr[i]);
        solve(arr[i]);
    }


    return 0;
}


