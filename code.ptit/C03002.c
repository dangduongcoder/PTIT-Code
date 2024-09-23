#include <stdio.h>


int nt[1000000];

void snt() {

    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2 ; i < 1000000 ; i ++) {
        nt[i] = 1;
    }

    for (int i = 2 ; i*i < 1000000 ; i ++) {
        if (nt[i] == 1) {
            for (int j = i * i; j < 1000000; j += i) {
                nt[j] = 0;
            }
        }
    }

}

int main () {

    snt();

    int n ;
    scanf("%d", &n);

    for (int i = 2 ; i < n ; i ++) {
        if (nt[i] == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
