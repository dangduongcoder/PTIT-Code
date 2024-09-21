
#include<stdio.h>



int sum(int n){


    int sum = 0;

    while ( n != 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}


int main() {


    int a, b;

    scanf("%d %d", &a, &b);

    int sa = sum(a);
    int sb = sum(b);

    if (sa <= sb) {
        printf("%d %d", a, b);
    } else {
        printf("%d %d", b, a);
    }



    return 0;
}





