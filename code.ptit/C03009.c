#include <stdio.h>

#define LIM 1000001

int arr[LIM];

void init () {


    for (int i = 0 ; i < LIM ; i ++) {
        arr[i] = 1;
    }

    for (int i = 2 ; i < LIM ; i ++) {
        for (int j = i*2 ; j < LIM ; j += i) {
            arr[j] += i;
        }
    }

}

int main () {

    init();

    int a, b ;
    scanf("%d %d", &a, &b);

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }

    for (int i = a ; i <= b ; i ++) {
        if (arr[i] == i) {
            printf("%d ", i);
        }
    }


    return 0;
}

