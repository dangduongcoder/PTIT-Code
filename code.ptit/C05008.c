#include <stdio.h>
int test = 1;

void solve() {

    int n, m;
    scanf("%d %d", &n, &m);

    int row[n], col[m];
    int arr[n][m];

    for (int i = 0; i < n; i++) row[i] = 0;
    for (int i = 0; i < m; i++) col[i] = 0;
    


    int maxcol = 0, maxrow = 0;
    int maxrowindex = 0, maxcolindex = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < m ; j ++) {
            scanf("%d", &arr[i][j]);
            row[i] += arr[i][j];
            col[j] += arr[i][j];
            
            // if (col[j] > maxcol) {
            //     maxcol = col[j];
            // }
            if (row[i] > maxrow)
            {
                maxrow = row[i];
                maxrowindex = i;
            }
            
        }
    }

    for (int i = 0 ; i < m ; i ++) {
        col[i] -= arr[maxrowindex][i];
        if (col[i] > maxcol) {
            maxcol = col[i];
            maxcolindex = i;
        } 
    }
    
    // printf("%d %d", maxrowindex, maxcolindex);
    printf("Test %d:\n", test);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < m ; j ++) {
            if (i != maxrowindex && j != maxcolindex) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    
    test ++;

    
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