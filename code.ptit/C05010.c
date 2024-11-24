#include <stdio.h>

int nt[1000000 + 1];

void init() {

    for (int i = 0; i <= 1000000; i++)
    {
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


int main() {

    init();

    int n;
    scanf("%d", &n);

    int arr[n][n];

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i && nt[arr[i][j]])
            {
                sum += arr[i][j];
            }
            
        }
    }

    printf("%d", sum);
    

    return 0;
}