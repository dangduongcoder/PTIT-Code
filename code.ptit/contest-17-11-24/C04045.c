#include <stdio.h>



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

    return 0;
}