#include <stdio.h>
#include <math.h>

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

void solve() {

    int n;
    scanf("%d", &n);

    int arr[n];

    int min = 9999999999;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), cmp);

    for (int i = 0 ; i < n - 1 ; i ++) {
        int t = abs(arr[i] - arr[i + 1]);
        if (t < min) {
            min = t;
            cnt = 1;
        } else if (t == min)
        {
            cnt ++;
        }
        
    }
    
    printf("%d %d\n", min, cnt);

}

int main() {


    int n ;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    

    return 0;
}