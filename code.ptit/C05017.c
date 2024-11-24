#include <stdio.h>



void solve(){


    int n, m;
    scanf("%d %d", &n, &m);


    int arr[n * m];

    for (int i = 0; i < n * m; i++)
    {
        scanf("%d", arr[i]);
    }
    
    int arr[n][m];

    int layer = (n > m) ? m : n;
    int step = layer/2 * 4 + ((layer % 2 == 0) ? 0 : 1);

    // printf("%d %d\n", layer, step);

    int mark = 1;

    while (step > 0)
    {
        for (int i = n - layer; i < layer; i++)
        {
            arr[n - layer][i] = mark;
            mark ++ ;
        }
        step --;

        for (int i = n - layer + 1; i < layer; i++)
        {
            arr[i][layer - 1] = mark;
            mark ++ ;
        }
        step --;
        for (int i = layer - 2; i >= n - layer; i--)
        {
            arr[layer - 1][i] = mark;
            mark ++ ;
        }
        step --;        
        for (int i = layer - 2; i >= n - layer + 1; i--)
        {
            arr[i][n - layer] = mark;
            mark ++ ;
        }
        step --;        
        layer --;

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