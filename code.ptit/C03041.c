
#include<stdio.h>



int solve(int a, int b, int c, int d) {


    if (c - a == d - b) {
        return 1;
    }

    return 0;

}


int main() {


    int n;

    scanf("%d", &n);

    int arr[n];

    int a, b, c, d;

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        arr[i] = solve(a, b, c, d);
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






