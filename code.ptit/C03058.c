#include <stdio.h>

long long arr[10000 + 3];

long long ucln(long long a, long long b) {

    while (a % b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return b;

}

void init() {

    arr[1] = 1;
    for (int i = 1; i < 10000; i++)
    {
        arr[i + 1] = arr[i]/ucln(arr[i], i + 1) * (i + 1);
    }
}

void solve() {

    int n;
    scanf("%d", &n);
    printf("%lld\n", arr[n]);

}

int main() {

    init();

    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    

    return 0;
}