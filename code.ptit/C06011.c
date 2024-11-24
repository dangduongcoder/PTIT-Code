#include <stdio.h>


char s[501];

int main() {

    int n;
    scanf("%d\n", &n);

    while (n--)
    {
        fgets(s, 501, stdin);


        int ok = 1;

        int len = (s[strlen(s) - 1] == '\n') ? strlen(s) - 1 : strlen(s);

        int sum = (len % 2 == 0) ? 0 : (int)s[len / 2] - 48;

        // printf("%c\n", s[len - 1]);

        if (s[len - 1] == '8') {
            for (int i = 0 ; i < len / 2 ; i ++) {
                if (s[i] != s[len - 1 - i]) {
                    ok = 0;
                    break;
                }
                // printf("%d ", i);
                sum += (int)s[i] * 2 - 48 - 48;
            }
            // printf("\n");
        } else {
            ok = 0;
        }

        

        // if (ok && sum % 10 == 0) printf ("YES %d %d\n",len, sum); else printf("NO %d %d\n",len, sum);
        if (ok && sum % 10 == 0) printf ("YES\n"); else printf("NO\n");
    }
    

    return 0;
}