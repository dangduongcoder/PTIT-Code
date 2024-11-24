#include <stdio.h>
#include <math.h>



int check(n) {
    int num1 = n % 10;
    n/= 10;
    int num2;
    while (n != 0)
    {   
        num2 = n % 10;
        n /= 10;
        if (num1 >= num2) {
            num1 = num2;
        } else {
            return 0;
        }
    }
    return 1;

}

void solve() {


    int n;
    scanf("%d", &n);

    int start = pow(10, n-1);
    int end = pow(10, n) - 1;

    // printf("%d %d", start, end);

    for (int i = start ; i <= end ; i ++) {
        if (check(i)) {
            printf("%d ", i);
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