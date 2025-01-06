#include <stdio.h>



long long calc(long long n) {
    long long max = n;

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            max = i;
            while (n % i == 0){
                n /= i;
            }
        }
    }

    if (n > 1) max = n;

    return max;
}

int main() {

    int n;
    scanf("%d", &n);

    long long sum = 0;
    while (n--)
    {
        long long t;
        scanf("%lld", &t);
        printf("%lld\n", calc(t));
    }
    

    return 0;
}
