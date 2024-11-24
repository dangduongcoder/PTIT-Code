#include <stdio.h>


int main() {

    int n;
    int step = 1;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n - 1 ; i ++) {
        for (int j = i + 1 ; j < n ; j ++) {
            if (arr[j] < arr[i]) {
                int t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
        printf("Buoc %d: ", step ++);
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
        
    }
    


    return 0;
}