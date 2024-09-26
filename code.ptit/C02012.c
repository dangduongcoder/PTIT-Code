#include <stdio.h>



int main() {

    int a, b;
    scanf("%d %d", &a. &b);


    for (int i = 1 ; i <= a ; i ++) {
        int c = 0;
        int t = i;
        int isUp = 1;
        while(c <= b) {
            c ++;
            if (t > 1 && isUp == 1) {
                printf("%d", t);
                t --;
            } else {

            }
        }

    }


    return 0;
}
