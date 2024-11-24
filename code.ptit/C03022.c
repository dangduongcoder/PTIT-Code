#include <stdio.h>

int nt[100000];

int sumnum(int a) {

    int sum = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

void init() {
    for (int i = 0 ; i < 100000 ; i ++) {
        nt[i] = 1;
    }

    nt[0] = 0; 
    nt[1] = 0;  

    for (int i = 2 ; i * i < 100000 ; i ++) {
        if (nt[i] == 1) {
            for (int j = i * i ; j < 100000 ; j += i) {
                nt[j] = 0;
            }
        }
    }
}

int main() {

    init();

    int n; 
    int c = 0;
    scanf("%d", &n);

    for (int i = 0 ; i < n ; i ++) {
        if (nt[i] && sumnum(i) % 5 == 0) {
            c ++;
            printf("%d ", i);
        }
    }
    printf("\n%d", c);

    return 0;
}