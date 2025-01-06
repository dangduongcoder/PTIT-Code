#include <stdio.h>

long long bc(long long a, long long b) {
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
    int n ;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }
    int r[n + 1];
    r[0] = arr[0];
    r[n] = arr[n-1];

    for (int i = 0 ; i < n - 1 ; i ++) {
        r[i + 1] = bc(arr[i], arr[i + 1]);
    }

    for (int i = 0 ; i <= n ; i ++) {
        printf("%d ", r[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    

}