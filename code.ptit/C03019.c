#include <stdio.h>
#include <math.h>

int main() {


    // Biết trước đáp án và in ra

    int r[9] = {0,1,1,9,18,90,180,900,1800,9000};

    int n;
    scanf("%d", &n);

    while (n--)
    {
        int t;
        scanf("%d", &t);
        printf("%d\n", r[t]);
    }
    

    return 0;
}