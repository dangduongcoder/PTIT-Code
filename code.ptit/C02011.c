#include <stdio.h>


int main () {


    int a, b;

    scanf("%d %d", &a , &b);


    for (int i = 1 ; i <= a ; i ++) {
        if (i <= b) {
            for (int j = i ; j <= b ; j ++) {
                printf("%d", j);
            }

            for (int j = b - 1 ; j > b - i ; j --) {
                printf("%d", j);
            }

        } else {
            for (int j = i ; j > i - b ; j --) {
                printf("%d", j);
            }
        }


        printf("\n");
    }



    return 0;
}
