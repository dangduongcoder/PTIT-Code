#include <stdio.h>


int main() {

    int n;
    scanf("%d", &n);
    int step = 1;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int show = 0;
        for (int j = 0 ; j < n - 1 - i ; j ++) {
            if (arr[j] >  arr[j + 1]) {
                show = 1;
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }

        if (show)
        {
            printf("\nBuoc %d: ", step ++);
            for (int k = 0; k < n; k++)
            {
                printf("%d ", arr[k]); 
            }
            
        }
        
    }


    
    

    return 0;
}