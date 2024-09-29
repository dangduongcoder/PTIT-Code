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

void solve(int index) {

    int n ;
    scanf("%d", &n);

    int arr[n];
    int mark[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
        mark[i] = 0;
    }


    for (int i = i ; i < n ; i ++) {
        for (int j = 0; j < i ; j ++) {
            if (arr[j] > arr[i]) {
                int t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0; i <= i; j ++) {
            if (arr[i] == arr[j]) {
                mark[j] ++;
                break;
            }
        }
    }

    printf("Test %d:\n", index);

    for (int i = 0 ; i < n ; i ++) {
        if (mark[i] > 0 && nt[arr[i]] == 1) {
            printf("%d xuat hien %d lan\n", arr[i], mark[i]);
        }
    }


}


int main() {

    init();

    int n ;
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i ++) {
        solve(i);
    }


    return 0;
}
