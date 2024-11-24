#include <stdio.h>


int check(int n) {

    int ori = n;
    int rev = 0;
    int dv = 1;

    while (n != 0)
    {
        int r = n % 10;
        if (r == 9) {
            return 0;
        }

        rev = rev * 10 + r;
        n /= 10;

    }
    
    return rev == ori;

}

int main () {


    int n;
    scanf("%d", &n);
    int cnt = 0;

    for (int i = 2; i < n; i++)
    {
        if (check(i)) {
            printf("%d ", i);
            cnt ++;
        }
    }
    printf("\n%d", cnt);
    

    return 0;
}