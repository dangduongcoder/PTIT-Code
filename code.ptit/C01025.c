#include <stdio.h>

int max(int a, int b) {
    return ((a > b) ? a : b);
}

int min(int a, int b) {
    return ((a < b) ? a : b);
}

int main() {

    int xA1, xA2, yA1, yA2, xB1, xB2, yB1, yB2;

    scanf("%d %d %d %d %d %d %d %d", &xA1, &yA1, &xA2, &yA2, &xB1, &yB1, &xB2, &yB2);

    int minX = min(xA1, min(xA2, min(xB1, xB2)));
    int maxX = max(xA1, max(xA2, max(xB1, xB2)));
    int minY = min(yA1, min(yA2, min(yB1, yB2)));
    int maxY = max(yA1, max(yA2, max(yB1, yB2)));

    int r = max(maxX - minX, maxY - minY);

    printf("%d", r * r);

    return 0;
}