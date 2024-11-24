#include <stdio.h>
#include <math.h>



int check(int n) {
    int ori = n;
    int sum = 0;
    int rev = 0;

    while (n!= 0)
    {
        int r = n % 10;
        if (r != 4) {
            sum += r;
            rev = rev * 10 + r;
        } else {
            return 0;
        }
        n /= 10;
    }

    // printf("(%d %d)", ori, rev);

    if (rev == ori && sum % 10 == 0) {
        return 1;
    }

    return 0;
    
}

void solve() {
    int n;
    scanf("%d", &n);   
    int start = pow(10, n - 1);
    int end = pow(10, n) - 1;

    for (int i = start ; i <= end ; i ++) {
        if (check(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

}

int main () {

    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    


    return 0;
}