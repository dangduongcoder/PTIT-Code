#include <stdio.h>


char s[501];

int main() {

    int n;
    scanf("%d\n", &n);

    while (n--)
    {
        fgets(s, 501, stdin);

        int ok = 1;
        

        for (int i = 0 ; i < (strlen(s) - 1) / 2 ; i ++) {
            if (s[i] != s[strlen(s) - 1 - i] && ((int)s[i] % 2 != 0 || (int)s[strlen(s) - 1 - i] % 2 != 0)) {
                ok = 0;
                break;
            }
        }

        if (ok) printf ("YES\n"); else printf("NO\n");
    }
    

    return 0;
}