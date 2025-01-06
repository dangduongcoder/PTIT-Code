#include <stdio.h>


int nt(int n) {

    if (n < 2) {
        return 0;
    } else if (n == 2 || n == 3) {
        return 1;
    } else {
        for (int i = 2 ; i * i <= n ; i ++) {
            if (n % i == 0) {
                return 0;
            }
        }
    }

    return 1;

}


void solve() {
    int a, b;
    scanf("%d %d", &a, &b);

    int cnt = 0;

    for (int i = a ; i <= b ; i ++) {
        int n = i, o = i, ok = 1, sum = 0;
        while (n != 0)
        {
            int r = n % 10;
            sum += r;
            if (!(r == 2 || r == 3 || r == 5 || r == 7)) {
                ok = 0;
                break;
            }
            n /= 10;
        }

        if (ok && nt(sum) && nt(o)) {
            cnt ++;
        } 
        
    }

    printf("%d\n", cnt);
}

int main() {

    int n;
    scanf("%d", &n);

    while ( n --)
    {
        solve();
    }
    
    
    return 0;
}