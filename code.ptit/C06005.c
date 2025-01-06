#include <stdio.h>
#include <string.h>

int main() {


    char s[102];

    gets(s);

    char w[50][10];

    int cnt_w = 0;
    int cnt = 0;

    for (int i = 0; i < strlen(s) + 1; i++)
    {
        w[cnt_w][cnt] = (s[i] <= 'z' && s[i] >= 'a') ? s[i] : s[i] - 'A' + 'a';

        if (s[i + 1] == ' ' || s[i + 1] == '\0') {
            w[cnt_w][cnt + 1] = '\0';
            cnt_w ++;
            cnt = 0;
            i ++;
        } else {
            cnt ++;
        }
    }

    int c[cnt_w];

    for (int i = 0 ; i < cnt_w ; i ++) {
        c[i] = 0;
    }

    // printf("%s ", w[0]);
    for (int i = 0 ; i < cnt_w ; i ++) {
        int ok = 1;
        for (int j = 0 ; j <= i ; j ++) {
            if (strcmp(w[j], w[i]) == 0) {
                c[j] ++;
                break;
            }
        }
    }

    for (int i = 0 ; i < cnt_w ; i ++) {
        if (c[i] > 0) {
            printf("%s %d\n", w[i], c[i]);
        }
    }

    

    return 0;
}