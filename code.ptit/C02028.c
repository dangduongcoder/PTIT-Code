#include <stdio.h>

int main() {

    //65=>A

    int n;
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i ++) {
        for (int j = n - i + 1 ; j > 0 ; j --) {
            printf("%c",(char)(65 + 2*(n-j)));
        }
        printf("\n");
    }

    return 0;
}
