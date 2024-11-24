#include <stdio.h>
#include <string.h>

void solve() {

    int check[10];

    for (int i = 0 ; i < 10 ; i ++) {
        check[i] = 0;
    }

    char s[1005];

    fgets(s, sizeof(s), stdin);

    if (s[0] != '0'){
        for (int i = 0 ;i < strlen(s) ; i ++) {
            if (s[i] != 10) {
                if ((int)s[i] >= 48 && (int)s[i] <= 48 + 9) {
                check[s[i] - 48] ++;
                } else {
                    
                    printf("INVALID\n");
                    return;
                }
            }
        }
    } else {
        printf("INVALID\n");
        return;
    }

    for (int i = 0 ; i < 10 ; i ++) {
        if (check[i] == 0) {
            printf("NO\n");
            return;
        }
    }

    printf("YES\n");

}

int main() {

    int n;
    scanf("%d", &n);
    getchar();

    while (n--)
    {
        solve();
    }
    

    return 0;
}