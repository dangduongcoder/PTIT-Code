#include <stdio.h>
#include <string.h>

void solve() {

    char s[22];

    fgets(s, 22, stdin);

    s[strcspn(s, "\n")] = '\0';
    
    int try = 0;
    int len = strlen(s);

    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i]) {
            try ++;
        }
    }
    
    if (try == 1 || (try == 0 && len % 2 == 1))
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    

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