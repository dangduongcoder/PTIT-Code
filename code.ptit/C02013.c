#include <stdio.h>
#include <math.h>

int max (int a, int b) {
    return a > b ? a : b;
}
int min (int a, int b) {
    return a < b ? a : b;
}

int main() {


    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0 ; i < a ; i ++) {
        int c = 0;
        for (int j = max(a, b) - i ; j > max(a, b) - b - i ; j --) {
            printf("%d", j > 0 ? j : abs(j) + 2);
            c = j;
        }
        printf("\n");
    }

    return 0;
}