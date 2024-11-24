#include <stdio.h>


int test = 1;

void solve() {

    printf("Test %d:\n", test ++);

    int n;
    scanf("%d", &n);

    int arr1[n], arr2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1 ; j < n ; j ++) {
            if (arr1[i] > arr1[j]) {
                int t = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = t;
            }
            if (arr2[i] < arr2[j]) {
                int t = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = t;
            }
        }
    }

    for (int i = 0; i < n * 2; i++)
    {
        printf("%d ", (i % 2 == 0) ? arr1[i/2] : arr2[i/2]);
    }
    printf("\n");
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