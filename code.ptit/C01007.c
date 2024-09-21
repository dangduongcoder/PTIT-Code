

#include <stdio.h>

int main () {

    int n, m;




    scanf("%d %d", &n, &m);

    long long int l;

    l = (long long int)n * (long long int)m;

    printf("%d\n%d\n%lld\n%d\n%d\n%.2f", n + m, n - m, l, n/m,  n % m, (float)n / (float)m);


    return 0;
}



