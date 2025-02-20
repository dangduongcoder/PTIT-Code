#include <stdio.h>

int main() {
    int n, x, y;
    scanf("%d", &n);

    int sumX = 0, sumY = 0;
    int minX = 1e9, maxX = -1e9;
    int minY = 1e9, maxY = -1e9;

    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &x, &y);
        sumX += x;
        sumY += y;

        if (x < minX) minX = x;
        if (x > maxX) maxX = x;

        if (y < minY) minY = y;
        if (y > maxY) maxY = y;
    }

    if (sumX < sumY) {
        sumY += minX;
        printf("%d", sumY);
    } else if (sumX > sumY) {
        sumX += minY;
        printf("%d", sumX);
    } else {
        sumX += maxY;
        sumY += maxX;
        printf("%d", sumX < sumY ? sumX : sumY);
    }

    return 0;
}
