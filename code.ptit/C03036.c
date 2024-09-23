#include <stdio.h>


int check(long long int n) {


    char s[20];
    int sum = 0;

    sprintf(s, "%lld", n);

    int l = strlen(s);


    for (int i = 0 ; i < l ; i ++) {
        if (s[i] != s[l-i-1]) {
            return 0;
        }
        if (((int)(s[i]) - 48) % 2 != 1) {
            return 0;
        }

        sum += (int)(s[i]) - 48;
    }

    if (sum % 2 == 0) {
        return 0;
    }

    return 1;

}


int main () {

    int n;
    scanf("%d", &n);

    long long int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0 ; i < n ; i ++) {
        if (check(arr[i]) == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }


    return 0;
}
