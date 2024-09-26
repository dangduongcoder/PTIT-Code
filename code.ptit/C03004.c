#include <stdio.h>



long long int ucln(long long int a, long long int b) {

    long long int r = 0;

    while(b != 0) {
        r = a % b ;
        a = b;
        b = r;
    }

    return a;

}

int main () {

    long long int a, b;

    scanf("%lld %lld", &a, &b);

    long long int u = ucln(a, b);

    long long int bo = (a*b) / u;

    printf("%lld\n%lld", u, bo);


    return 0;
}


