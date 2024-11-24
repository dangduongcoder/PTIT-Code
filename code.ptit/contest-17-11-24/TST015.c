#include <stdio.h>
#include <math.h>


struct tamgiac
{
    int a;
    int b;
    int c;
    float dt;
};


int main() {


    int n;
    scanf("%d", &n);

    struct tamgiac tg[n];

    for (int i = 0 ; i < n ; i++) {
        scanf("%d %d %d", &tg[i].a, &tg[i].b, &tg[i].c);
        float p = (tg[i].a + tg[i].b + tg[i].c) / 2;
        tg[i].dt = sqrt(p * (p - tg[i].a) * (p - tg[i].b) * (p - tg[i].c));
    }

    for (int i = 0 ; i < n - 1 ; i ++) {
        for (int j = i + 1 ; j < n ; j ++) {
            if (tg[i].dt > tg[j].dt) {
                struct tamgiac t = tg[j];
                tg[j] = tg[i];
                tg[i] = t;
            }
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        printf("%d %d %d\n", tg[i].a, tg[i].b, tg[i].c);
    }

    return 0;

}