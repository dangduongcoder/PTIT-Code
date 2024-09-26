
#include <stdio.h>

int main() {

    int n, k ;
    int c = 0;
    int s = 1;

    scanf("%d %d", &n, &k);

    for (int i = 2; i <= n ; i ++) {
        s *= i;
        while (s % 2 == 0) {
            s /= 2;
            c++;
        }
    }

    //printf("%d %d", k, c);

    if (c >= k) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }


    return 0;
}
