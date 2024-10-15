#include <stdio.h>

int max(int a, int b) {
    if (a > b)
    {
        return a;
    }

    return b;
    
}

int main() {

    int a, b;
    scanf("%d %d", &a, &b);


    for (int i = 1; i <= a ; i ++) {
        for (int j = i ; j >= max(1, i - b + 1) ; j --) {
            printf("%d", j);
        }
        for (int j = 2 ; j <= b - i + 1 ; j ++) {
            printf("%d", j);
        }
        printf("\n");
    }


    return 0;
}
