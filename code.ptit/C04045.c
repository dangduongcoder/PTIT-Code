#include <stdio.h>


void solve() {


    char s[2000];

    gets(s);
    int c = 0, l = 0, nu = 0;

    char n[5];

    int index = 0;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (! (s[i] == ' ' || s[i] == '\0') ) {
            n[index ++] = s[i];
        } else {
            n[index] = '\0';
            int num = atoi(n);
            nu ++;
            if (num % 2 == 0) c ++; else l ++;
            index = 0;
            // printf("%d ", num);
        }
    }

    printf((nu % 2 == 0 && c > l) || (nu % 2 == 1 && l > c) ? "YES\n" : "NO\n");

}


int main() {


    int n;
    scanf("%d\n", &n);

    while (n--)
    {
        solve();
    }
    

    return 0;
}