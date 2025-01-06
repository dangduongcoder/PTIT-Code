#include <stdio.h>


void solve() {

    int n;
    int none = 1;

    scanf("%d", &n);

    int arr[n];


    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n - 1 && none != 0; i ++) {
        for (int j = i + 1 ; j < n ; j ++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                none = 0;
                break;
            } 
        }
    }

    if (none) {
        printf("NO\n");
    }
    


}

int main() {

    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    

}