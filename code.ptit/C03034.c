
#include <stdio.h>


void solve() {
    int n;
    scanf("%d", &n);

    int c = 0;

    for (int i = 1 ; i * i <= n ; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                c++;
            }
            if ((n/i) % 2 == 0 && i != n/i) {
                c++;
            }

        }
    }

    printf("%d\n", c);
    

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