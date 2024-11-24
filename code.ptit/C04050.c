#include <stdio.h>



int hop[1000];
int ab[1000];
int ba[1000];
int markA[1000], markB[1000];




int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    int arrA[a], arrB[b];

    for (int i = 0 ; i < a ; i ++) {
        scanf("%d", &arrA[i]);
        if (!markA[arrA[i]]) {
            hop[arrA[i]] ++;
            ab[arrA[i]] ++;
            ba[arrA[i]] --;
            markA[arrA[i]] = 1;
        }

    }

    for (int i = 0 ; i < b ; i ++) {
        scanf("%d", &arrB[i]);
        if (!markB[arrB[i]]) {
            hop[arrB[i]] ++;
            ba[arrB[i]] ++;
            ab[arrB[i]] --;
            markB[arrB[i]] = 1;
        }
    }

    for (int i = 1; i < 1000; i++)
    {
        if (hop[i] >= 2) printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i < 1000; i++)
    {
        if (ab[i] == 1) printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i < 1000; i++)
    {
        if (ba[i] == 1) printf("%d ", i);
    }
    


    return 0;

}