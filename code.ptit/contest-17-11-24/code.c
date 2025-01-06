
#include <stdio.h>
#include <math.h>


int check (long long n) {
    int sum = 0;
    long long or = n;
    long long rev = 0;
    int r = 0;
    long long base = pow(10, (int)log10(n));

    while (n != 0)
    {
        r = n % 10;
        rev += r * base;
        base /= 10;
        n /= 10;
        sum += r;
    }

    return rev == or && sum % 10 == 0;

}

int main () {

    int n;
    scanf("%d", &n);

    while (n--)
    {
        int t;
        scanf("%d", &t);
        long long start = (long long)pow(10, t - 1), end = (long long)pow(10, t) - 1;
        int cnt = 0;

        for (long long i = start ; i <= end ; i ++) {
            cnt += check(i);
        }

        printf("%d\n", cnt);
    }


}
