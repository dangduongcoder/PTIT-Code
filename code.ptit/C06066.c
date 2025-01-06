
#include <stdio.h>
#include <string.h>

int max (int a, int b) {
    return a > b ? a : b;
}

void xoaO(char *s) {
    int i = 0;

    while (s[i] == '0') {
        i++;
    }

    if (s[i] == '\0') {
        s[0] = '0';
        s[1] = '\0';
    } else {
        memmove(s, s + i, strlen(s) - i + 1);
    }
}

void split(const char *s, char *s1, char *s2) {
    int n = strlen(s);  
    int mid = n / 2;    
    
    strncpy(s1, s, mid);
    s1[mid] = '\0';  
    
    strcpy(s2, s + mid);
}

void sum(char s1[], char s2[], char *sumstr) {
    // char s1[500 + 1];
    // char s2[500 + 1];

    // gets(s1);
    // gets(s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    int sum[max(len1, len2) + 1];

    int i1 = len1 - 1, i2 = len2 - 1, isum = max(len1, len2) + 1;
    int r = 0;

    while (i1 >= -1  || i2 >= -1 ){
        int t = ((i1 >= 0 ? s1[i1] - '0' : 0) + (i2 >= 0 ? s2[i2] - '0' : 0) + r );
        sum[isum-- - 1] = t % 10;
        r = t / 10;
        i1 -- ;
        i2 -- ;
    }
    if (r > 0) {
        sum[0] = r;
    }
    
    int flen = max(len1, len2) + 1;

    char rr[flen + 1];
    rr[0] = '0';

    for (int i = sum[0] == 0 ? 1 : 0; i < max(len1, len2) + 1; i++)
    {
        // printf("%d", sum[i]);
        rr[i] = sum[i]+'0';
    }
    rr[flen] = '\0';
    // printf("\n");


    // printf("%s", rr);

    strcpy(sumstr, rr + (sum[0] == 0 ? 1 : 0));


}

int main() {

    char s[202];
    char s1[202];
    char s2[202];
    gets(s);

    if (strlen(s) == 1) {
        printf("%s", s);
        return 0;
    }

    while (strlen(s) > 1)
    {
        split(s, s1, s2);

        // printf("%s + %s = ", s1, s2);

        sum(s1, s2, &s);
        xoaO(s1);
        xoaO(s2);
        xoaO(s);
        printf("%s\n", s);
    }
    
    

    return 0;
}