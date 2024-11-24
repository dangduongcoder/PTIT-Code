#include <stdio.h>

int test = 1;

int solve() {


    int n;
    scanf("%d", &n);

    int arr[n][n];

    int layer = n;
    int step = n/2 * 4 + ((n % 2 == 0) ? 0 : 1);

    // printf("%d %d\n", layer, step);
    printf("Test %d:\n", test ++);

    int mark = n * n;

    while (step > 0)
    {
        for (int i = n - layer; i < layer; i++)
        {
            arr[n - layer][i] = mark;
            mark -- ;
        }
        step --;

        for (int i = n - layer + 1; i < layer; i++)
        {
            arr[i][layer - 1] = mark;
            mark -- ;
        }
        step --;
        for (int i = layer - 2; i >= n - layer; i--)
        {
            arr[layer - 1][i] = mark;
            mark -- ;
        }
        step --;        
        for (int i = layer - 2; i >= n - layer + 1; i--)
        {
            arr[i][n - layer] = mark;
            mark -- ;
        }
        step --;        
        layer --;

    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < n ; j ++) {
            printf("%d ", arr[i][j]);
        }   
        printf("\n");
    }

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