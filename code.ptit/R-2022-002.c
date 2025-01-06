#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int nt[1000001];

void snt() {

    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2 ; i < 1000001 ; i ++) {
        nt[i] = 1;
    }

    for (int i = 2 ; i*i < 1000001 ; i ++) {
        if (nt[i] == 1) {
            for (int j = i * i; j < 1000001; j += i) {
                nt[j] = 0;
            }
        }
    }

}



int main() {

    snt();

    int n;
    scanf("%d", &n);

    while (n--)
    {
        int t;
        int ok = 1;
        scanf("%d", &t);
        char str[20];
        sprintf(str, "%d", t);
        int len = strlen(str);

        for (int i = 0; i < len; i++)
        {
            char c = str[0];
            for (int j = 0 ; j < len - 1 ; j ++) {
                str[j] = str[j + 1];
            }
            str[len - 1] = c;
            str[len] = '\0';

            if (nt[atol(str)] == 0) ok = 0;

            if (!ok) break;   

        }

        printf(ok ? "1 " : "0 ");
        

    }
    

    return 0;
}