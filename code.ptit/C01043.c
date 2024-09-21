
#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);


    int or = n;
    int sum = 0;

    while ( n != 0) {
        int t = n%10;
        int tmp = 1;
        for (int i = 1; i <= t ; i ++) {
            tmp *= i;
        }

        sum += tmp;

        //sum += t*t;
        n /= 10;

    }
    //printf("%d\n", sum);

    if (sum == or) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }

    return 0;
}
