#include <stdio.h>


int main() {


    int n;
    scanf("%d", &n);

    float avg = 0.0;

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
        avg += (float)arr[i];
    }

    printf("%.3f", avg/(float)n);

    return 0;
}
