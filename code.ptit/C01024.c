

#include <stdio.h>

int main () {


    int n, t, start, end;
    int sum = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n ; i ++) {
        t = arr[i];

        end = t % 10;

        while(t != 0) {
            if (t < 10) {
                start = t % 10;
                break;
            }
            t = t / 10;
        }

        //printf("%d %d", start, end);

        if (start == end ) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }




    return 0;
}









