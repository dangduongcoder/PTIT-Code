
#include <stdio.h>

int main () {


    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf("NO");
        } else {
            printf("%.2f", -(float)c / (float)b);
        }
    } else {
        float d = b*b - 4*a*c;

        if (d < 0) {
            printf("NO");
        } else if (d == 0) {
            printf("%.2f", -(float)b / (float)(a * 2));
        } else {
            float x1 = (float)(-b + sqrt(d)) / (2*a);
            float x2 = (float)(-b - sqrt(d)) / (2*a);

            printf("%.2f %.2f", x1, x2);
        }

    }



    return 0;
}





