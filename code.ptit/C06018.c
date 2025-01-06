#include <stdio.h>
#include <string.h>


void solve() {
    char s1[205], s2[205];

    gets(s1);
    gets(s2);

    char w1[200][200] = {}, w2[200][200] = {};

    int c1 = 0, c2 = 0;
    int i1 = 0, i2 = 0;
    for (int i = 0; i <= strlen(s1); i++)
    {
        if (s1[i] == ' ' || s1[i] == '\0') {
            c1 ++;
            w1[c1][i1++] = '\0';
            i1 = 0;
            i++;
        }
        w1[c1][i1++] = s1[i];
    }

    for (int i = 0; i <= strlen(s2); i++)
    {
        if (s2[i] == ' ' || s2[i] == '\0') {
            c2 ++;
            w2[c2][i2++] = '\0';
            i2 = 0;
            i++;
        }
        w2[c2][i2++] = s2[i];
    }

    // for (int i = 0 ; i < c2 ; i ++) {
    //     printf("(%s)", w2[i]);
    // }
    // printf("\n");

    int maxl = c1 > c2 ? c1 : c2;
    char only1[maxl][205];
    int cnt = 0;

    for (int i = 0 ; i < c1 ; i ++) {
        int ok = 1;   
        for (int j = 0 ; j < c2 ; j ++) {
            // printf("%s %s\n", w1[i], w2[j]);
            if (strcmp(w1[i], w2[j]) == 0) {
                ok = 0;
                // printf("%s %s\n", w1[i], w2[j]);
                break;
            }
        }
        if (ok) strcpy(only1[cnt++], w1[i]);
    }

    for (int i = 0 ; i < cnt - 1 ; i ++) {
        for (int j = i + 1 ; j < cnt ; j ++) {
            if (strcmp(only1[i], only1[j]) > 0) {
                char tmp[205];
                strcpy(tmp, only1[i]);
                strcpy(only1[i], only1[j]);
                strcpy(only1[j], tmp);
            }
        }
    }

    printf("%s ", only1[0]);

    for (int i = 1 ; i < cnt ; i ++) {
        if (strcmp(only1[i], only1[i - 1]) != 0) {
            printf("%s ", only1[i]);
        }
    }
    printf("\n");
}

int main () {

    int n;
    scanf("%d\n", &n);

    while (n--)
    {
        solve();
    }
    


    return 0;
}