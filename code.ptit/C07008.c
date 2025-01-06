#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void solve() {

    char s1[500000];
    char s2[500000];

    gets(s1);
    gets(s2);

    int n1[50000];
    int n2[50000];

    int sum[10002];

    for (int i = 0 ; i < 10002 ; i ++) sum[i] = 0;

    int cnt1 = 0, cnt2 = 0, cnt1_i = 0, cnt2_i = 0;

    char tmp1[10], tmp2[10];

    for (int i = 0 ; i <= strlen(s1) ; i ++) {
        if (s1[i] <= '9' && s1[i] >= '0') {
            tmp1[cnt1_i++] = s1[i];
        } else {
            if (cnt1_i > 0) {
                tmp1[cnt1_i] = '\0';
                n1[cnt1 ++] = atoi(tmp1);
                cnt1_i = 0;
            }
        }
    }

    for (int i = 0 ; i <= strlen(s2) ; i ++) {
        if (s2[i] <= '9' && s2[i] >= '0') {
            tmp2[cnt2_i++] = s2[i];
        } else {
            if (cnt2_i > 0) {
                tmp2[cnt2_i] = '\0';
                n2[cnt2 ++] = atoi(tmp2);
                cnt2_i = 0;
            }
        }
    }

    int max = 0;

    for (int i = 0 ; i < cnt1 ; i += 2) {
        if (n1[i + 1] > max) max = n1[i + 1];
        sum[n1[i + 1]] += n1[i];
    }
    for (int i = 0 ; i < cnt2 ; i += 2) {
        if (n2[i + 1] > max) max = n2[i + 1];
        sum[n2[i + 1]] += n2[i];
    }

    for (int i = max ; i >= 0 ; i --) {
        if (sum[i] != 0) {
            printf("%d*x^%d", sum[i], i);
            printf(i != 0 ? " + " : "");
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