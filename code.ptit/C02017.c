#include <stdio.h>


int main() {

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1 ; j <= i ; j ++) {
            printf("%d", j * 2 - 1);
        }
        for (int j = i - 1 ; j >= 1 ; j --) {
            printf("%d", j * 2 - 1);
        }
        printf("\n");
    }
    

    return 0;
}