
#include <stdio.h>

int main () {

    int n, m;




    scanf("%d %d", &n, &m);

    if (m == 0) {
        printf("%d", 0);
        return 0;
    }

    printf("%d %d %d %.2f %d", n + m, n - m, n * m, (float)n / (float)m,  n % m);


    return 0;
}



