#include <stdio.h>
#include <string.h>


void solve() {

    int check[10];

    for (int i = 0 ; i < 10 ; i ++) {
        check[i] = 0;
    }

    char s[14];

    fgets(s, sizeof(s), stdin);

    int ok = 0;

    int s1 = s[6] - 48;
    int s2 = s[7] - 48;
    int s3 = s[8] - 48;
    int s4 = s[10] - 48;
    int s5 = s[11] - 48;

    int num[5] = {s1, s2, s3, s4, s5};

    int sanhtien = 0;
    int nguquy = 0;
    int ganh = 0;
    int locphat = 1;

    if (s1 < s2 && s2 < s3 && s3 < s4 && s4 < s5) {
        sanhtien = 1;
    }

    if (s1 == s2 && s2 == s3 && s3 == s4 && s4 == s5) {
        nguquy = 1;
    }

    if (s1 == s2 && s2 == s3 && s4 == s5) {
        ganh = 1;
    }

    for (int i = 0 ; i < 5 ; i ++) {
        if (num[i] != 6 && num[i] != 8) {
            locphat = 0;
            // printf("%d\n", i);
            break;
        }
    }

    if (sanhtien || nguquy || ganh || locphat) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

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