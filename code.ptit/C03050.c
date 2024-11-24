#include <stdio.h>


int arr[100000 + 4];

int main() {

    

    for (int i = 1; i < 100000 + 4; i++)
    {
        arr[i] = 0;
    }


    int n, x1, x2, t;

    scanf("%d", &n);

    t = n;

    while (t-- - 1)
    {
        scanf("%d %d", &x1, &x2);

        arr[x1] ++;
        arr[x2] ++;

    }

    for (int i = 1; i < 100000 + 4; i++)
    {
        if (arr[i] == n - 1) {
            printf("Yes");
            // printf("Yes - %d %d %d", i, arr[i], n - 1);
            return 0;
        }
    }
    
    printf("No");
    


    return 0;
}