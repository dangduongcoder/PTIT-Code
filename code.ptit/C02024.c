#include <stdio.h>

int main () {


    int a, b;
    scanf("%d %d", &a, &b);

    char s[b];
    char or[b];

    for (int i = 0 ; i < b ; i ++) {
        s[i] = 'A' + i;
        or[i] = 'A' + i;
    }
    printf("%s\n", s);

    for (int i = 1 ; i < a ; i ++) {
        if (i < b) {
            for (int j = 0 ; j < b - 1 ; j ++) {
                s[j] = s[j + 1];
            }
            for (int j = 0 ; j < i ; j ++) {
                s[b - j - 1] = or[j];
            }
        }

        printf("%s\n", s);
    }


    return 0;
}