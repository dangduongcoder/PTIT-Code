#include <stdio.h>
#include <math.h>


long long ucnn(long long a, long long b) {

    while (b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }

    return a;
    
}

void solve() {

    long long n;
    scanf("%lld", &n);

    if (n == 0) {
        printf("INVALID\n");
        return;
    }

    int length = (int)log10(n) + 1;

    if (length % 2 == 0) {

        long long num1 = 0, num2 = 0;
        int c = 1;
        int mid = length / 2;
        long long base1 = 1;
        long long base2 = 1;

        while (n != 0)
        {
            int r = n % 10;

            if (c <= mid) {
                num1 += base1 * r;
                base1 *= 10;
            } else {
                num2 += base2 * r;
                base2 *= 10;
            }

            c++;
            n /= 10;
        }

        if (num1 == 0 || num2 == 0) {
            printf("INVALID\n");
            return;
        }

        long long uc = ucnn(num1, num2);
        long long r = num1 * (num2 / uc);

        // printf("%d %d %d %d\n",length, num1, num2, (num1/ucnn));
        printf("%lld\n", r);
        

    } else {
        printf("INVALID\n");
    }



}

int main() {


    int n;
    scanf("%d", &n);

    while (n --)
    {
        solve();
    }
    

}