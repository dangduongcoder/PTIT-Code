#include <stdio.h>
#include <string.h>

int test = 1;

void solve() {

    printf("Test %d: ", test ++);

    char s[205];
    char w[102];

    gets(s);
    gets(w);

    int len = strlen(w);

    for (int i = 0 ; i < strlen(s) ; i ++) {
        int ok = 1;
        for (int j = 0 ; j < strlen(w) ; j ++) {
            if (! (s[i + j] == w[j] || s[i + j] == w[j] - 'A' + 'a' || s[i + j] - 'A' + 'a' == w[j]) ) {
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

    printf("\n");

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