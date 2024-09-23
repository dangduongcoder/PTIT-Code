#include <stdio.h>


int nt[1000000];

void snt() {

    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2 ; i < 1000000 ; i ++) {
        nt[i] = 1;
    }

    for (int i = 2 ; i*i < 1000000 ; i ++) {
        if (nt[i] == 1) {
            for (int j = i * i; j < 1000000; j += i) {
                nt[j] = 0;
            }
        }
    }

}

int check(int n){

    int sum = 0 ;

    while(n != 0) {
        if (nt[n % 10] == 0) {
            return 0;
        }
        n /= 10;
    }

    return 1;

}

int main () {

    snt();

    int n ;
    scanf("%d", &n);

    int arr[n][2];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    for (int i = 0 ; i < n ; i ++) {
        int c = 0;
        for (int j = arr[i][0] ; j <= arr[i][1] ; j ++) {
            if (nt[j] && check(j)) {
                //printf("%d ", j);
                c++;
            }
        }
        printf("%d\n", c);
    }

    return 0;

}
