


#include<stdio.h>




int main() {


    int n, m;
    scanf("%d %d", &n, &m);


    for (int i = 1 ; i <= n ; i ++) {
        for (int j = 1 ; j <= i - 1 ; j ++) {
            printf("~");
        }

        for (int k = 1 ; k <= m ; k ++) {
            if(k == 1 || k == m || i == 1 || i == n) {
                printf("*");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }



    return 0;
}



