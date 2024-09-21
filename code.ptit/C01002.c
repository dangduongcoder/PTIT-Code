#include <stdio.h>

int main () {

    int n;

    scanf("%d", &n);

    long int t;

    long int a[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &t);
        a[i] = t * 2;
    }

    for (int i = 0 ; i < n ; i ++) {
        printf("%d\n", a[i]);
    }



    return 0;
}

