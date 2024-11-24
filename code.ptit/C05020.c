#include <stdio.h>

long long lastfi = 0;
long long curfi = 1;

long long fi(int n) {

    if (n == 0) return 0;
    if (n == 1) return 1;

    long long tmplastfi = lastfi;
    long long tmpcurfi = curfi;

    lastfi = curfi;
    curfi = tmplastfi + tmpcurfi;

    return curfi;

}

int main() {

    int n;
    scanf("%d", &n);

    long long arr[n][n];

    int layer = n;
    int step = n/2 * 4 + ((n % 2 == 0) ? 0 : 1);

    // printf("%d %d\n", layer, step);

    int mark = 0;

    while (step > 0)
    {
        for (int i = n - layer; i < layer; i++)
        {
            arr[n - layer][i] = fi(mark);
            mark ++ ;
        }
        step --;

        for (int i = n - layer + 1; i < layer; i++)
        {
            arr[i][layer - 1] = fi(mark);
            mark ++ ;
        }
        step --;
        for (int i = layer - 2; i >= n - layer; i--)
        {
            arr[layer - 1][i] = fi(mark);
            mark ++ ;
        }
        step --;        
        for (int i = layer - 2; i >= n - layer + 1; i--)
        {
            arr[i][n - layer] = fi(mark);
            mark ++ ;
        }
        step --;        
        layer --;

    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < n ; j ++) {
            printf("%lld ", arr[i][j]);
        }   
        printf("\n");
    }
    


    return 0;
}