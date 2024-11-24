#include <stdio.h>
#include <math.h>


void solve() {

    long long n;
    scanf("%lld", &n);

    long long first = 0, last = 0, ori = 0, rev = 0;

    last = n % 10;
    n /= 10;

    int i = 0;
    while (n >= 10)
    {
        int r = n % 10;
        ori = ori + r * pow(10, i);
        rev = rev * 10 + r;
        i ++; 
        n /= 10;
    }

    first = n;

    //printf("%d %d %d %d\n", first, last, ori, rev);

    if ((last == first * 2 || first == last * 2) && ori == rev) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    


}

int main() {

    int n;

    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    

    return 0;
}