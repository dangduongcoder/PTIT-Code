#include <stdio.h>



int main () {


    int n ;
    scanf("%d", &n) ;

    int le[n];
    int chan[n];

    int l = 0;
    int c = 0;
    int t = 0;

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &t);

        if (t % 2 == 0) {
            chan[c] = t;
            c ++;
        } else {
            le[l] = t;
            l ++;
        }
    }

    for (int i = 0 ; i < c ; i ++) {
        printf("%d ", chan[i]);
    }
    printf("\n");
    for (int i = 0 ; i < l ; i ++) {
        printf("%d ", le[i]);
    }

    return 0;
}
