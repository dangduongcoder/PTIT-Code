#include <stdio.h>




int main () {

    int a, b;

    scanf("%d %d", &a, &b);

    char s[b];

    char save[b * a];
    int index = 0;



    for (int i = 0 ; i < b ; i ++) {
        s[i] = 'A' + i;
        save[b - i - 1] = 'A' + i;
        index = i + 1;
    }
    // printf("%s\n", s);

    for (int i = 1 ; i < a ; i ++) {
        if (i < b) {
            for (int j = 0 ; j < b - 1 ; j ++) {
                s[j] = s[j + 1];
            }
            for (int j = b - i ; j < b ; j ++) {
                s[j] = s[j - 1];
            }
        }

        for (int j = b - 1; j >= 0; j--) {
            save[index] = s[j];
            index ++;
        }
        // index ++;
        // printf("%s\n", save);
    }
    int mark = 1;
    for (int i = a * b - 1 ; i >= 0 ; i --) {
        printf("%c", save[i]);

        if (mark % b == 0) {
            printf("\n");
        }
        mark++;
    }

    // printf("\n%s", save);

    return 0;
}