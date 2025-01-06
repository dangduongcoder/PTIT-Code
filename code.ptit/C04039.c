#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void solve(int a, int b) {
    int l = abs(b - a);

    int sum = 0;
    int i = 1;
    int step = 0;

    while (sum + i * 2 <= l)
    {
        sum += i * 2;
        i ++;
        step += 2;
    }

    if (l - sum != 0 && l - sum <= i) {
        step ++;
    } else if (l - sum != 0 && l - sum <= i * 2) {
        step += 2;
    }

    printf("%d\n", step);

    

}

int main () {

    char raw[100];

    while (fgets(raw, 100, stdin))
    {
        raw[strcspn(raw, "\n")] = '\0';
        int w = 0;
        int j = 0;
        char num[2][11] = {};
        for (int i = 0 ; i <= strlen(raw) && w < 2 ; i ++) {
            if (raw[i] != ' ') {
                num[w][j ++] = raw[i]; 
            } else {
                num[0][j] = '\0';
                w ++;
                j = 0;
            };
        }

        int a, b;
        a = atoi(num[0]);
        b = atoi(num[1]);

        solve(a, b);
    }
    


}

