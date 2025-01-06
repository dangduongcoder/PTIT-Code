#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int cmp(const void *a, const void *b) {
    long long x = *(long long *)a;
    long long y = *(long long *)b;
    return (x > y) - (x < y);
}

void solve() {
    int n ;
    scanf("%d", &n);

    long long arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%lld", &arr[i]);
    }

    qsort(arr, n, sizeof(long long), cmp);

    int ok = 0;



    for (int i = 0 ; i < n - 2 ; i ++) {
        for (int j = i + 1; j < n - 1; j++) {
            long long sum = arr[i] * arr[i] + arr[j] * arr[j];
            int l = j + 1, r = n - 1;

            while (l <= r) {
                int mid = (l + r) / 2;
                if (arr[mid] * arr[mid] == sum) {
                    ok = 1;
                    break;
                } else if (arr[mid] * arr[mid] < sum) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            if (ok) break;
        }
        if (ok) break;
    }

    printf(ok ? "YES\n" : "NO\n");
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