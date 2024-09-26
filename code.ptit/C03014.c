#include <stdio.h>



long long ucln(long long a, long long b) {

    long long r = 0;

    while(b != 0) {
        r = a % b ;
        a = b;
        b = r;
    }

    return a;

}

int main () {

    int n ;

    scanf("%d", &n);

    long long arr[n][2];
    long long a, b;
    long long int t = 0;

    for (int i = 0 ; i < n ; i ++) {
        scanf("%lld %lld", &a, &b);
        t = a * b;
        arr[i][0] = t / ucln(a, b);
        arr[i][1] = ucln(a, b);
    }

    for (int i = 0 ; i < n ; i ++) {
        printf("%lld %lld\n", arr[i][0], arr[i][1]);
    }


    return 0;
}

