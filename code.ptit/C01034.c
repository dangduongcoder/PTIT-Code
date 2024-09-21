#include <stdio.h>

int main() {


    int n, m ;
    scanf("%d %d", &n, &m);

    int tn = (int)(ceil(sqrt(n)));
    int tm = (int)(floor(sqrt(m)));

    printf("%d\n", tm-tn+1);

    for (int i = tn; i <= tm ; i ++) {
            long long int t = i*i;
        printf("%lld\n", t);
    }

    return 0;
}
