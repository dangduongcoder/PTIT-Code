

#include <stdio.h>

int main () {


    int n, t, down;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0 ; i < n ; i ++) {
        t = arr[i];
        down = (int)(sqrt(t));
        //printf("%d", down);
        if (down * down == t) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }


    return 0;
}






