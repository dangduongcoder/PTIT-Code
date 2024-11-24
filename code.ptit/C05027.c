#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    long long minX = 1000000 + 5, minY = 1000000 + 5;
    int x, y;

    while (n--)
    {
        scanf("%d %d", &x, &y);
        if (x < minX) minX = x;
        if (y < minY) minY = y;
    }

    printf("%lld", minX * minY);
    


    return 0;
}