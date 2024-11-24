#include <stdio.h>
#include <math.h>

const int MAX = 1000000;

int nt[1000000 + 3];

void init() {

    for (int i = 0; i <= MAX; i++)
    {
        nt[i] = 1;
    }
    
    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2; i * i <= MAX; i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= MAX; j+= i)
            {
                nt[j] = 0;
            }
            
        }
    }
}


int main() {

    init();

    int n;
    scanf("%d", &n);

    while (n--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        int boundL = sqrt(a);
        int boundR = sqrt(b);

        int c = 0;

        for (int i = boundL; i <= boundR; i++)
        {
            if (nt[i]) {
                c ++;
            }
        }
        
        printf("%d\n", c);

    }
    


    return 0;
}