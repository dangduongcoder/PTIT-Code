#include <stdio.h>

int main () {

    int t, n;

    scanf("%d", &n);

    double a[n];


    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &t);
        a[i] = 1.0/(double)t;
    }

    for (int i = 0 ; i < n ; i ++) {
        printf("%.15f\n", a[i]);
    }


    return 0;
}


