#include <stdio.h>


struct Khach
{
    int in;
    int time;
};


int main() {


    int n;
    long long time = 0;
    scanf("%d", &n);

    struct Khach arr[n];

    for (int i = 0; i < n; i++) 
        scanf("%d %d", &arr[i].in, &arr[i].time);
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1 ; j < n ; j ++) {
            if (arr[i].in > arr[j].in) {
                struct Khach tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%d %d\n", arr[i].in, arr[i].time);
        if (arr[i].in > time) {
            time = arr[i].in + arr[i].time;
        } else {
            time += arr[i].time;
        }
    }
    
    printf("%lld", time);
    

    return 0;
}