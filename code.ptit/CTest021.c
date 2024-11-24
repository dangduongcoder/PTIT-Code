#include <stdio.h>


int nt[1000 + 5];

void init () {

    for (int i = 0; i <= 1000 + 5; i++)
    {
        nt [i] = 1;
    }
    
    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2 ; i * i <= 1000 ; i ++) {
        if (nt[i]) {
            for (int j = i * i ; j <= 1000 ; j += i) {
                nt[j] = 0;
            }
        }
    }


}


void solve() {
    int n, t;
    scanf("%d", &n);

    int count[1001];

    for (int i = 0; i < 1001; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        if (nt[t]) {
            count[t] ++;
        }
    }

    for (int i = 0; i < 1001; i++)
    {
        if (count[i] > 0)
        {
            printf("%d ", i);
        }
        
    }

    printf("\n");
    
    

}


int main() {


    init();

    int n;
    scanf("%d", &n);

    while (n --)
    {
        solve();
    }
    



    return 0;
}