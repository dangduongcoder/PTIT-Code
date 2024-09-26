#include <stdio.h>


int ucln(int a, int b) {

    int r = 0;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;

}

int main () {


    int a, b;

    scanf("%d %d", &a, &b);

    for (int i = a ; i <= b - 1 ; i ++) {
        for (int j = i + 1 ; j <= b ; j ++) {
            if (ucln(i, j) == 1) {
                printf("(%d,%d)\n", i, j);
            }
        }

    }


    return 0;
}
