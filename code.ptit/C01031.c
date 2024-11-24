#include <stdio.h>


int main() {

    int n;
    scanf("%d", &n);
    int mark = 0;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0){
                n /= i;
                if (mark != 0) {
                    printf("x");
                } else {
                    mark ++;
                }
                printf("%d", i);
            }
        }
    }

    if (n > 1) {
        printf("%d", n);
    }
    
    


    return 0;
}