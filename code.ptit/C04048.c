#include <stdio.h>


int n, m, k, res = 0;

int main() {


    scanf("%d %d %d", &n, &m, &k);

    int road[n + 2];

    for (int i = 0; i < n + 2; i++) road[i] = 0;

    road[0] = 1;
    road[n + 1] = 1;

    while (m --)
    {
        int pos;
        scanf("%d", &pos);

        int maxL = (pos - k >= 1) ? pos - k : 1;
        int maxR = (pos + k <= n) ? pos + k : n;

        for (int i = maxL; i <= maxR; i++) road[i] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        int len = 0;

        while (road[i] == 0)
        {
            len ++;
            i ++;
        }
        
        if (len > 0)
        {
            int need = len / (2 * k + 1);

            if (len % (2 * k + 1) != 0) need ++;

            res += need;
            i--;
        }
        
    }

    printf("%d", res);    


    return 0;
}