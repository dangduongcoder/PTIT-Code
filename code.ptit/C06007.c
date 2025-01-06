#include <stdio.h>
#include <string.h>


int main() {


    char s[102];
    char w[102];

    gets(s);
    gets(w);

    int len = strlen(w);

    for (int i = 0 ; i < strlen(s) ; i ++) {
        int ok = 1;
        for (int j = 0 ; j < strlen(w) ; j ++) {
            if (s[i + j] != w[j]) {
                ok = 0;
                break;
            }
        }
        if (!ok) {
            printf("%c", s[i]);
        } else {
            i += len;
        }
    }

    return 0;
}