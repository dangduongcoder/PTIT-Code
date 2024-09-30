#include <stdio.h>

#define LIM 10001

int nt[LIM];


void init() {

    for (int i = 0 ; i < LIM ; i ++) {
        nt[i] = 1;
    }

    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2; i*i < LIM ; i ++  ) {
        if (nt[i] == 1) {
            for (int j = i * i ; j < LIM ; j += i) {
                nt[j] = 0;
            }
        }
    }

}



int main() {

    init();

    int n ;
    scanf("%d", &n);

    int arr[n];
    int mark[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
        mark[i] = 0;
    }


    int c = 0;

    for (int i = 0 ; i < n ; i ++) {
        if (nt[arr[i]] == 1) {
            c++;
        }
    }

    printf("%d ", c);

    for (int i = 0 ; i < n ; i ++) {
        if (nt[arr[i]] == 1) {
            printf("%d ", arr[i]);
        }
    }


    return 0;
}
