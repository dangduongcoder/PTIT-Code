#include <stdio.h>

int main () {


    int a, b;
    scanf("%d %d", &a, &b);

    char s[b];

    for (int i = 0 ; i < b ; i ++) {
        s[i] = '@' + i;
    }
    printf("%s\n", s);

    for (int i = 1 ; i < a ; i ++) {
        if (i < b) {
            for (int j = 0 ; j < b - 1 ; j ++) {
                s[j] = s[j + 1];
            }
            for (int j = b - i ; j < b ; j ++) {
                s[j] = s[j - 1];
            }
        }

        printf("%s\n", s);
    }


    return 0;
}