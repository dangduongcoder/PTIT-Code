#include <stdio.h>


get (int a, int r) {
    int cnt = 0;
    while (a % r == 0)
    {
        cnt ++;
        a /= r;
    }

    return cnt;
}

void solve() {


    int n,p,x;
    scanf("%d %d", &n, &p);

    x = 1;
    int cnt = 0;

    while (p * x <= n)
    {
        cnt += get(p * x, p);
        // printf("=>%d %d %d\n", p * x, p, get(p * x, p));
        x++;
    }
    
    printf("%d\n", cnt);

}

int main () {

    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    

}