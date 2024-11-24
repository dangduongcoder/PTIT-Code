#include <stdio.h>



void solve() {

    int n;
    scanf("%d", &n);

    int arr[n];

    long long max = -1e18;
    long long max_tmp = 0;
    int s_max = -1e9;

    if (n == 1) {
        int t;
        scanf("%d", &t);
        printf("%d\n", t);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);

        s_max = (t > s_max) ? t : s_max;

        max_tmp = (max_tmp + t <= 0) ? 0 : max_tmp + t;

        if (max_tmp > max)
        {
            max = max_tmp;
        }
        
    
    }

    
    
    
    printf("%lld\n", max == 0 ? s_max : max);
    
    // printf("\n");

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