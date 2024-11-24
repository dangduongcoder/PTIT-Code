#include <stdio.h>


int main() {


    int binary[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    int index = 0;

    while (n != 0)
    {
        binary[index] = n % 2;
        n /= 2;
        index ++ ;
    }

    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    
    

    return 0;
}