#include <stdio.h>

int test = 1;

void solve() {

    printf("Test %d:\n", test ++);

    int n;
    scanf("%d", &n);

    int arr[n];
    int dp[n];
    int max = 0;

    dp[0] = 1;

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 1; i < n; i++)
    {
        dp[i] = (arr[i] > arr[i - 1] ? dp[i - 1] + 1 : 1);
        max = (dp[i] > max ? dp[i] : max);
    }

    printf("%d", max);

    for (int i = 0; i < n; i++)
    {
        if (dp[i] == max)
        {
            printf("\n");
            for (int j = i - max + 1; j <= i; j++)
            {
                printf("%d ", arr[j]);
            }
            
        }
        
        
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
    


    return 0;
}