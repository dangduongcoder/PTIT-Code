#include <stdio.h>

int main() {


    long long n;

    scanf("%lld", &n);

    int total[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (n != 0)
    {
        int r = n % 10 ;

        if (r == 2 || r == 3 || r == 5 || r == 7) {
            total[r] ++ ;
        }

        n /= 10;
    }

    for (int i = 0 ; i < 10 ; i ++ ) {
        if (total[i] > 0) {
            printf("%d %d\n", i, total[i]);
        }
    }
    

    return 0;
}