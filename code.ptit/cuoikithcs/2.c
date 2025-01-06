#include <stdio.h>
#include <string.h>

int main() {

    char s[10];
    int k;
    int ok = 1;

    scanf("%s", &s);
    scanf("%d", &k);

    int len = strlen(s);

    for (int i = 0 ; i < k / 2 ; i ++) {
        if (s[len - 1 - i] != s[len - k + i]) {
            ok = 0;
            break;
        }
    }

    printf(ok ? "YES" : "NO");

    return 0;
}