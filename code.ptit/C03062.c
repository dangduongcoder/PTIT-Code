#include <stdio.h>

long long uc(long long a, long long b) {
    long long x = a, y = b;
    while (a % b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }

    return (x/b) * y;
    
}

void solve() {

    int n, m;
    scanf("%d %d", &n, &m);

    long long r = 1;

    for (int i = n; i <= m; i++)
    {
        r = uc(r, i);
    }
    
    printf("%lld\n", r);

}

int main () {

    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    

    return 0;
}