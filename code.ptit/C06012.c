#include <stdio.h>


char s[501];

int main() {

    int n;
    scanf("%d\n", &n);

    while (n--)
    {
        fgets(s, 501, stdin);


        int len = (s[strlen(s) - 1] == '\n') ? strlen(s) - 1 : strlen(s);

        int ok = 1;

        for (int i = 0 ; i < len / 2 + 1 ; i ++) {
                if ((s[i] == s[len - 1 - i]) && (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7')) {
                    
                } else {
                    ok = 0;
                    break;
                }
            }

        if (ok) printf ("YES\n"); else printf("NO\n");
    }
    

    return 0;
}