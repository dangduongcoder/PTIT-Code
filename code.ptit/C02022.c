#include <stdio.h>

int main() {

    int n ;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = -1;
        }
    }
    
    int index = 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) {
            for (int j = 0; j <= i; j++)
            {
                arr[i][j] = index ++;
            }
        } else {
            for (int j = i; j >= 0; j--)
            {
                arr[i][j] = index ++;
            }
        }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != -1) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}