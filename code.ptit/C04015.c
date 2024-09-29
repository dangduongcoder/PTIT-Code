#include <stdio.h>


void solve(int index) {

    int n;
    scanf("%d", &n);

    int arr[n];

    int mark[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
        mark[i] = 0;
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j <= i ; j ++) {
            if (arr[j] == arr[i]) {
                mark[j] ++;
                break;
            }
        }
    }


    printf("Test %d:\n", index);


    for (int i = 0 ; i < n ; i ++) {
        if (mark[i] > 0) {
            printf("%d xuat hien %d lan\n", arr[i], mark[i]);
        }
    }

}

int main() {

    int n;
    scanf("%d", &n);


    for (int i = 1; i <= n ; i ++) {
        solve(i);
    }



    return 0;
}


