#include <stdio.h>



int ucln(int a, int b) {

    int r = 0;

    while(b != 0) {
        r = a % b ;
        a = b;
        b = r;
    }

    return a;

}

int main () {

    int n ;

    scanf("%d", &n);

    int arr[n][4];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
    }

    for (int i = 0 ; i < n ; i ++) {
        if (ucln(arr[i][0], arr[i][1]) == ucln(arr[i][2], arr[i][3])) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
