#include <stdio.h>


long long int arr[93];

void init() {

    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i < 93 ; i ++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

}

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a - 1; i < b ; i ++) {
        printf("%lld ", arr[i]);
    }
    printf("\n");
}

int main () {



    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    
    init();

    int n ; 
    scanf("%d", &n);


    while (n--)
    {
        solve();
    }
    
    

    return 0;
}