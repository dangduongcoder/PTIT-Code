#include <stdio.h>




double f(double x, double a, double b, double c) {
    return a * pow(x, 2) + b * x + c;
}


int main () {

    double a, b, c, x;

    scanf("%lf %lf %lf %lf", &c, &b, &a, &x);

    double c1 = f(x, a, b, c);
    double c2 = c1 * c1;

    printf("%.3lf", f(c1 + c2, a, b, c));

    return 0;
}