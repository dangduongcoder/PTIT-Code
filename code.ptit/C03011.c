#include <stdio.h>




int gt[10];

void init() {

    gt[0] = 1;
    gt[1] = 1;
    gt[2] = 2;

    for (int i = 3 ; i < 10 ; i ++) {
        gt[i] = 1;
    }

    for (int i = 3 ; i < 10 ; i ++) {
        gt[i] = gt[i - 1] * i;
    }
}




int main () {

    init();

    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }

    for (int i = a ; i <= b ; i ++) {
        int t = i;
        int sum = 0;
        while (t != 0) {
            sum += gt[t % 10];
            t /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }

    }



    return 0;
}
