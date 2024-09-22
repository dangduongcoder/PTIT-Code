
#include <stdio.h>

long long int solve (long long int n) {

    if (n == 0) {
        return -1;
    }

    long long int r = 0;
    long long int dv = 1;
    int num = 0;

    while (n != 0) {
        if (n % 10 == 0 || n % 10 == 8 || n % 10 == 9) {
            num = 0;
        } else if (n % 10 == 1) {
            num = 1;
        } else {
            return -1;
        }
        r += num * dv;
        dv *= 10;
        n /= 10;
    }

    if (r == 0) {
        return -1;
    }

    return r;

}

int main () {

    int n ;
    scanf("%d", &n);

    long long int arr[n];
    long long int t;

    for (int i = 0 ; i < n ; i ++) {
        scanf("%lld", &t);

        arr[i] = solve(t);

    }


    for ( int i = 0 ; i < n ; i ++) {
        if (arr[i] == - 1) {
            printf("INVALID\n");
        } else {
            printf("%lld\n", arr[i]);
        }
    }



    return 0;
}
