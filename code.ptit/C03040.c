#include <stdio.h>



int sumNum(int n) {
    int sum = 0;

    while ( n!= 0)
    {
        sum += n%10;
        n /= 10;
    }
    
    return sum;
}


int sumFracNum(int n) {
    int sum = 0;
    for (int i = 2 ; i <= n ; i ++) {
        while (n % i == 0)
        {
            sum += sumNum(i);
            n /= i;
        }
        
    }

    return sum;
    
}

int main() {

    int n;
    scanf("%d", &n);

    if (sumFracNum(n) == sumNum(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}