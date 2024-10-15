#include <stdio.h>


int fibo[20];

void init() {
    fibo[0] = 1;
    fibo[1] = 1;
    for (int i = 2; i < 20 ; i ++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}


int sum(int n) {
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    
    return s;

}

int check(n) {
    if (n < 2) {
        return 0;
    }
    if (n >= 4) {
        for (int i = 2 ; i < n ; i ++) {
            if (n % i == 0) {
                return 0;
            }
        }
    }

    int s = sum(n);

    for (int i = 0 ; i < 20 ; i ++) {
        if (s == fibo[i]) {
            return 1;
        }
    }

    return 0;
    
}


int main() {

    init();


    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        int t = a;
        a = b; 
        b = t;
    }
    

    for (int i = a ; i <= b ; i ++) {
        if (check(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}