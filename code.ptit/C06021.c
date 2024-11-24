#include <stdio.h>
#include <string.h>

void solve() {

    char s[1000 + 5];

    fgets(s, 1000 + 5 , stdin);

    s[strcspn(s, "\n")] = '\0';

    int c = 0 , l = 0;

    if (s[0] == 0) {
        printf("INVALID\n");
        return;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9') {
            if ((s[i] - '0') % 2 == 0) {
                c ++;
            } else {
                l ++;
            }
        } else {
            printf("INVALID\n");
            return;
        }
    }

    int le = strlen(s);

    printf((c != l && ( (le % 2 == 0 && c > l) || (le % 2 != 0) && l > c )) ? "YES\n" : "NO\n");
    

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