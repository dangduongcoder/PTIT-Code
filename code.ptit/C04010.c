


#include<stdio.h>


int main() {


    int n;
    scanf("%d", &n);

    long long int arr[n];

    for (int i = 0 ; i < n ; i++) {
        scanf("%lld", &arr[i]);
    }

    long long int min1 = 999999999999;
    long long int min2 = 999999999999;

    for (int i = 0 ; i < n ; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }


    printf("%lld %lld\n", min1, min2);


    return 0;
}








