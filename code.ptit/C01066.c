

#include<stdio.h>


int min(int a, int b) {

    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &c, &b);

    printf("%d",min(a, min(b, c)));

    return 0;
}


