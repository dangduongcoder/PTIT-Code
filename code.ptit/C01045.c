

#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int start, end;

    end = n % 10;

    while ( n != 0) {
        start = n%10;
        n /= 10;

    }


    printf("%d %d", start, end);

    return 0;
}
