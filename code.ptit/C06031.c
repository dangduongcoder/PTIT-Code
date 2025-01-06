#include <stdio.h>
#include <string.h>

int main() {

    char s[52];

    gets(s);

    int len = strlen(s);

    int dp[len];

    for (int i = 0 ; i < len ; i ++) dp[i] = 1;

    for (int i = 0 ; i < len ; i ++) {
        for (int j = 0 ; j < i ; j ++) {
            if (s[j] < s[i]) {
                dp[i] = (dp[i] < dp[j] + 1) ? dp[j] + 1 : dp[i]; 
            }
        }
    }

    int max = 0;

    for (int i = 0 ; i < len ; i ++) {
        if (dp[i] > max) max = dp[i]; 
    }

    if (max < 26 ) {
        printf("%d", 26 - max);
    } else {
        printf("0");
    }

    return 0;
}