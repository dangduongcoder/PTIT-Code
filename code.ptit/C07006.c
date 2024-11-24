#include <stdio.h>
#include <math.h>



void solve(){

    double a, b, x, y, m, n;

    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &x, &y, &m, &n);

    double A, B, C;

    A = sqrt((a - x) * (a - x) + (b - y) * (b - y));
    B = sqrt((m - x) * (m - x) + (n - y) * (n - y));
    C = sqrt((m - a) * (m - a) + (n - b) * (n - b));

    if (  A + B > C && B + C > A && A + C > B) {
        double s = (A + B + C) / 2;

        double dt = sqrt(s * (s - A) * (s - B) * (s - C));
        printf("%.2f\n", dt);
    } else {
        printf("INVALID\n");
    }


}


int main() {


    int n;
    scanf("%d", &n);

    while ( n --)
    {
        solve();
    }
    

    return 0;
}