#include <stdio.h>

void solve(int index)
{

    int n;
    scanf("%d", &n);

    printf("Test %d: ", index);

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
            printf("%d(%d) ", i, c);
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