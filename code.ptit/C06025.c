
#include <stdio.h>
#include <string.h>

int max (int a, int b) {
    return a > b ? a : b;
}

void solve() {
    char s1[5000 + 1];
    char s2[5000 + 1];

    fgets(s1, 5000 + 1, stdin);
    fgets(s2, 5000 + 1, stdin);
    
    // printf("%d\n", strcmp(s1, s2));


    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len2 > len1) {
        char tmp[5000 + 1];
        strcpy(tmp, s1);
        strcpy(s1, s2);
        strcpy(s2, tmp);
    } else if ((len1 == len2) && strcmp(s1, s2) < 0){
        char tmp[5000 + 1];
        strcpy(tmp, s1);
        strcpy(s1, s2);
        strcpy(s2, tmp);
    } else if ((len1 == len2) && strcmp(s1, s2) == 0)
    {
        printf("0\n");
        return;
    }
    
    
    len1 = strlen(s1);
    len2 = strlen(s2);

    int sum[max(len1, len2) + 1];

    int i1 = len1 - 1, i2 = len2 - 1, isum = max(len1, len2) + 1;
    int r = 0;

    while (i1 >= -1  || i2 >= -1 ){
        int t = ((i1 >= 0 ? s1[i1] - '0' : 0) - (i2 >= 0 ? s2[i2] - '0' : 0) - r );
        sum[isum-- - 1] = t < 0 ? t + 10 : t;
        r = t < 0 ? 1 : 0;
        i1 -- ;
        i2 -- ;
    }
    if (r > 0) {
        sum[0] = r;
    }
    
    int ok = 0;

    for (int i = sum[0] == 0 ? 1 : 0; i < max(len1, len2) + 1; i++)
    {
        if (ok == 0 && sum[i] != 0) {
            ok = 1;
        }
        if (ok == 1) {
            printf("%d", sum[i]);
        }
        // printf("%d", sum[i]);
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