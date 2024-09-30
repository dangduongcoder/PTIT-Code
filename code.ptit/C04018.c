#include <stdio.h>



void solve() {

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    int c = 0;

    for (int i = 0 ; i < n - 1 ; i ++) {
        if (arr[i] == arr[i + 1]) {
            c++;
        }
    }

    printf("%d\n", c);



}

int main() {

    int n;
    scanf("%d", &n);

    while (n --) {
        solve();
    }


    return 0;
}
