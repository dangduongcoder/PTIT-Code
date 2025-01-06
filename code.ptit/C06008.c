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
        if (s[i + 1] == ' ' || s[i + 1] == '\0') {
            w[cnt_w][cnt] = s[i];
            w[cnt_w][cnt + 1] = '\0';
            cnt_w ++;
            cnt = 0;
            i ++;
        } else {
            w[cnt_w][cnt] = s[i];
            cnt ++;
        }
    }

    printf("%s ", w[0]);
    for (int i = 1 ; i < cnt_w ; i ++) {
        int ok = 1;
        for (int j = 0 ; j < i ; j ++) {
            if (strcmp(w[i], w[j]) == 0) {
                ok = 0;
                break;
            }
        }
        if (ok) printf("%s ", w[i]); 
    }
    

    return 0;
}