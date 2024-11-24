#include <stdio.h>


int main () {

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
        int min_i = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_i]) {
                min_i = j;
            }
        }

        int t = arr[i];
        arr[i] = arr[min_i];
        arr[min_i] = t;

        printf("\nBuoc %d: ", step ++);
        for (int k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);
        }
    }
    

    return 0;
}