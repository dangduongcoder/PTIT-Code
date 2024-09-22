#include <stdio.h>


int solve (long long int n) {

    int sum = 0;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    if (sum % 10 == 0) {
        return 1;
    } else {
        return 0;
    }

}

int main() {



    int n;
    scanf("%d", &n);

    int arr[n];
    long long int t = 0;

    for (int i = 0 ; i < n ; i ++) {
        scanf("%lld", &t);

        arr[i] = solve(t);

    }

    for (int i = 0 ; i < n ; i ++) {
        if (arr[i] == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }



    return 0;
}

