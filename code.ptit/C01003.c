#include <stdio.h>

int main () {

    int n;

    scanf("%d", &n);

    unsigned long long int t;

    unsigned long long int a[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%llu", &t);
        a[i] = t * t;
    }

    for (int i = 0 ; i < n ; i ++) {
        printf("%llu\n", a[i]);
    }



    return 0;
}

