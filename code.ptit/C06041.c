#include <stdio.h>
#include <string.h>

int main() {


    char s[100000 + 5];

    gets(s);

    char rev[strlen(s)];
    rev[0] = s[strlen(s) - 1];

    int cnt = 1;

    
    for (int i = strlen(s) - 1 ; i > 0 ; i --) {
        // printf("(%c,%c,%d)\n", s[i], s[i-1], i);
        if ((int)s[i] <= (int)s[i - 1]) {
            rev[cnt ++] = s[i - 1];
            // printf("=>(%c,%c,%d)\n", s[i], s[i-1], i);
        } else {
            s[i - 1] = s[i];
            
        }
    }

    for (int i = cnt - 1 ; i >= 0 ; i --) {
        printf("%c", rev[i]);
    }

    return 0;
}