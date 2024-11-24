#include <stdio.h>

int main() {


    int n;
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
        for (int j = i ; j < n ; j ++) {
            arr[j][i] = index ++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != -1)
            {
                printf("%d ", arr[i][j]);
            }
            
        }
        printf("\n");
    }
    

    return 0;
}