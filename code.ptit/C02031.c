#include <stdio.h>

int main() {

    //65=>A

    int n;
    scanf("%d", &n);

    for (int i = n ; i >= 1 ; i --) {
        for (int j = 1 ; j <= i ; j ++) {
            printf("%c", (char)(62 + i + j));
        }
        printf("\n");
    }



    return 0;
}
