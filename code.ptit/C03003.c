
#include <stdio.h>


int nt[10000000];

void snt() {

    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2 ; i < 10000000 ; i ++) {
        nt[i] = 1;
    }

    for (int i = 2 ; i*i < 10000000 ; i ++) {
        if (nt[i] == 1) {
            for (int j = i * i; j < 10000000; j += i) {
                nt[j] = 0;
            }
        }
    }

}

int main () {

    snt();

    int n ;
    scanf("%d", &n);

    int c = 0;
    int i = 2;

    while (c < n) {
        if (nt[i] == 1) {
            printf("%d\n", i);
            c ++;
        }
        i ++;
    }


    return 0;
}
