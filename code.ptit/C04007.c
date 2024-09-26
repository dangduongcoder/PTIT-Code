#include <stdio.h>


int main() {


    int a, b, p;
    int c1 = 0;
    int c2 = 0;

    scanf("%d %d", &a, &b);

    int arr1[a];
    int arr2[b];

    for (int i = 0 ; i < a ; i ++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0 ; i < b ; i ++) {
        scanf("%d", &arr2[i]);
    }

    scanf("%d", &p);

    for (int i = 0 ; i < a + b ; i ++) {
        if (i > p - 1 && p - 1 + b >= i) {
            printf("%d ", arr2[c2]);
            c2 ++;
        } else {
            printf("%d ", arr1[c1]);
            c1 ++;
        }
    }

    return 0;
}
