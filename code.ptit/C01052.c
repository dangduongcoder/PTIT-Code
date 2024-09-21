

#include<stdio.h>


void check (int n) {

    int r = 0;

    for (int i = 1; i <= (int)sqrt(n); i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                r++;
            }
            if ((n / i) != i && (n / i) % 2 == 0) {
                r++;
            }
        }
    }

    printf("%d\n", r);

}

int main() {

    int n;
    scanf("%d", &n);

    int arr[110];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n ; i ++) {
        check(arr[i]);
    }


    return 0;
}

