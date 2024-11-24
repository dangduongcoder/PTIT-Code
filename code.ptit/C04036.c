#include <stdio.h>


int moneys[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

void solve() {

    int n;
    int c = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        for (int i = 0; i < 10; i++)
        {
            if (n >= moneys[i]) {
                n -= moneys[i];
                break;
            }
        }
        
        c ++;
        
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