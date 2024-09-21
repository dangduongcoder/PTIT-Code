

#include <stdio.h>

int main () {


    int n, t;
    int sum = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n ; i ++) {
        sum = 0;
        t = arr[i];
        while(t != 0) {
            sum += t % 10;
            t = t / 10;
        }

        printf("%d\n", sum);
    }




    return 0;
}








