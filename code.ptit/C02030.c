#include <stdio.h>

int main () {

    int n;

    scanf("%d", &n);

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < i + 1 ; j ++) {
            printf("%c", '@' + j * 2);
        }
        for (int j = i - 1 ; j >= 0 ; j --) {
            printf("%c", '@' + j * 2);
        }
        printf("\n");
    }

    return 0;
}

