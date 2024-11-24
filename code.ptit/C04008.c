#include <stdio.h>


int c = 1;

void solve() {

    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);

    int a[n], b[m];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    
    for (int i = 0; i < m; i++)
    {
        scanf("%d ", &b[i]);
    }

    printf("Test %d:\n", c);

    for (int i = 0; i < n; i++)
    {
        if (i == p) {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", b[j]);
            }
            printf("%d ", a[i]);
        } else {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    c++;
    
    
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
