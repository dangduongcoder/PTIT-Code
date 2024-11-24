#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[n * 2 - 1][n * 2 - 1];

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i * 2 - 1; j++)
        {
            arr[n - i][n - i + j] = i;
            arr[n - i + j][n - i] = i;
            arr[n + i - 2][n - i + j] = i;
            arr[n - i + j][n + i - 2] = i;
        }
        
    }
    

    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < n * 2 - 1; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}