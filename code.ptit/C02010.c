
#include<stdio.h>




int main() {


    int n, m;

    scanf("%d %d", &n, &m);


    if (n <= m) {
        for (int i = 1 ; i <= n ; i ++) {
            for(int j = i ; j <= m ; j ++) {
                printf("%d", j);
            }
            for(int j = i - 1 ; j >= 1 ; j --) {
                printf("%d", j);
            }

            printf("\n");
        }
    } else {
        for (int i = 1 ; i <= m ; i ++) {
            for(int j = i ; j <= m ; j ++) {
                printf("%d", j);
            }
            for(int j = i - 1 ; j >= 1 ; j --) {
                printf("%d", j);
            }

            printf("\n");
        }

        for (int i = m + 1 ; i <= n ; i ++) {
            printf("%d", i);

            for (int j = m - 1 ; j > 0 ; j --) {
                printf("%d", j);
            }

            printf("\n");
        }
    }






    return 0;
}




