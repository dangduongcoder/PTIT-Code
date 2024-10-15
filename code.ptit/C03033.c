#include <stdio.h>

void solve(int index)
{

    int n;
    int isF = 0;
    scanf("%d", &n);

    printf("%d = ", n);

    for (int i = 2; i <= n; i++)
    {
        int c = 0;
        while (n%i == 0)
        {
            c++;
            n/=i;
        }
        if (c > 0)
        {
            if (isF)
            {
                printf("* ");
            }
            
            printf("%d^%d ", i, c);
            isF = 1;
        }
    }
    printf("\n");
}

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        solve(i);
    }
    

    return 0;
}