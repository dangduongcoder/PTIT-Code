#include <stdio.h>
#include <string.h>


int main () {

    int n;
    scanf("%d\n", &n);

    char list[n][52];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%s", &list[i]);
    }

    int len = strlen(list[0]);

    char gen[len][52];

    for (int i = 0 ; i < len ; i ++) {
        for (int j = i ; j < len ; j ++) {
            gen[i][j - i] = list[0][j];
        }

        for (int j = 0 ; j < i ; j ++) {
            gen[i][len - i + j] = list[0][j];
        }

        gen[i][len] = '\0';
    }

    for (int i = 0 ; i < len ; i ++) {
        printf("%s\n", gen[i]);
    }

    for (int i = 0 ; i < len ; i ++) {
        // printf("%s\n", gen[i]);
        for (int j = 0 ; j < n ; j ++) {
            if (strcmp(gen[i], list[j]) == 0) {
                printf("%s %d \n", list[j], i);
                break;
            }
        }
    }



    return 0;
}