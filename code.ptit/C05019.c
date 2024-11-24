#include <stdio.h>

int test = 1;

int nt[1000000 + 2];

void snt() {

    for (int i = 0 ; i <= 1000000 ; i ++) {
        nt[i] = 1;
    }

    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2 ; i * i <= 1000000 ; i ++) {
        if (nt[i]) {
            for (int j = i * i ; j <= 1000000 ; j += i) {
                nt[j] = 0;
            }
        }
    }

}

int cur = 2;

int get() {
    while (nt[cur] == 0)
    {
        cur ++;
    }

    return cur ++;
    
    
}

int solve() {


    int n;
    scanf("%d", &n);

    int arr[n][n];

    int layer = n;
    int step = n/2 * 4 + ((n % 2 == 0) ? 0 : 1);

    // printf("%d %d\n", layer, step);
    printf("Test %d:\n", test ++);

    cur = 2;

    int mark = 2;

    while (step > 0)
    {
        for (int i = n - layer; i < layer; i++)
        {
            arr[n - layer][i] = get();
        }
        step --;

        for (int i = n - layer + 1; i < layer; i++)
        {
            arr[i][layer - 1] = get();
        }
        step --;
        for (int i = layer - 2; i >= n - layer; i--)
        {
            arr[layer - 1][i] = get();
        }
        step --;        
        for (int i = layer - 2; i >= n - layer + 1; i--)
        {
            arr[i][n - layer] = get();
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

    snt();

    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    
    


    return 0;
}