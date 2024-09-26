#include <stdio.h>

#define LIM 1000000

int arr[LIM + 1];

void init() {

    arr[1] = 1;

    for (int i = 2 ; i <= LIM ; i ++) {
        arr[i] = 2;
    }

    for (int i = 2 ; i <= (int)(sqrt(LIM)) ; i ++) {
        //if (arr[i] < 3) {
            for (int j = i * 2 ; j <= LIM ; j += i) {
                arr[j] ++;
            }
        //}
    }

}

int main () {

    init();

    //int m;


    for (int i = 1 ; i <= 100 ; i ++) {
        printf("%d - %d\n", i, arr[i]);
    }

    return 0;
}
