


#include <stdio.h>




int main () {

    int n, m, t;



    scanf("%d %d", &n, &m);

    if (n > m) {
        t = n;
        n = m;
        m = t;
    }

    //printf("%d", (int)((n+m) * (float)(m-n + 1) / 2));

    int sum = 0;

    for (int i = n ; i <= m ; i ++) {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}










