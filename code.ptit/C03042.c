#include <stdio.h>



int check(int n) {

    if (n < 10) {
        return 0;
    }

    int ok = 1;
    int t;
    int l = n % 10;
    n /= 10;

    while (n != 0) {
        t = n % 10;
        if (t <= l) {
            ok = 0;
            break;
        }
        n /= 10;
        l = t;
    }

    return ok;

}

int main () {


    int n, a, b;
    scanf("%d", &n);

    while (n --) {
        scanf("%d %d", &a, &b);

        int c = 0;

        for (int i = a; i <= b; i++) {
            if (check(i) == 1) {
                c ++;
            }
        }

        printf("%d\n", c);

    }


    return 0;
}
