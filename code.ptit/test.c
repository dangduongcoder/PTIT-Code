#include <stdio.h>




void solve() {

    int n;
    scanf("%d", &n);

    int sum = n;

    while (n > 9)
    {
        sum = 0;
        while (n != 0)
        {
            sum += n % 10;
            n /= 10;
        }

        n = sum;   
    }
    printf("%d\n", sum);

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