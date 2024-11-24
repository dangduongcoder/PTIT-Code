#include <stdio.h>


void solve() {

    int mark[30000 + 1];

    for (int i = 0; i <= 30000; i++)
    {
        mark[i] = 0;
    }

    int n;
    scanf("%d", &n);

    int arr[n];
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        mark[arr[i]] ++;

        if (mark[arr[i]] > max)
        {
            max = mark[arr[i]];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (mark[arr[i]] == max) {
            printf("%d ", arr[i]);
            mark[arr[i]] = 0;
        }
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