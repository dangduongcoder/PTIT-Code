#include <stdio.h>



int calc(int n) {
    int max = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            max *= i;
            while (n % i == 0){
                n /= i;
            }
        }
    }

    if (n > 1) {
        max *= n;
    }

    return max;
}

int main() {

    int n;
    scanf("%d", &n);

    while (n--)
    {
        int t;
        scanf("%d", &t);
        printf("%d\n", calc(t));
    }
    

    return 0;
}
