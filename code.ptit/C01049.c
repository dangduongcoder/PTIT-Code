

#include<stdio.h>

void check(int n) {

    int c = 0;
    int l = 0;
    int t;

    if (n == 0) {
        printf("%d %d", 0, 0);
        return 0;
    }

    while ( n != 0) {
        t = n%10;
        n /= 10;

        if (t % 2 == 0) {
            c ++;
        } else {
            l ++;
        }
    }

    printf("%d %d\n", l, c);

}

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];


    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n ; i ++) {
        check(arr[i]);
    }


    return 0;
}

