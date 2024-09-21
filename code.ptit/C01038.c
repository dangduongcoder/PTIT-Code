

#include <stdio.h>

int main () {


    int n;
    int size = 0;
    //int i = 0;

    int arr[10];

    scanf("%d", &n);

    while(n != 0) {
        size += 1;
        arr[size - 1] = n % 10;
        n = n / 10;
        //printf("%d", arr[0]);
    }

    if (arr[0] != 0) {
        printf("%d", arr[0]);
    }


    for (int i = size - 2; i > 0 ; i --) {
        printf("%d", arr[i]);
    }


    printf("%d", arr[size - 1]);



    return 0;
}









