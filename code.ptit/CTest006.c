#include <stdio.h>



int nt[1001];

void init() {

    for (int i = 0 ; i < 1001 ; i ++) {
        nt[i] = 1;
    }

    nt[0] = 0;
    nt[1] = 0;
    nt[2] = 1;


    for (int i = 2; i * i < 1001; i++)
    {
        if (nt[i] != 0) {
            for (int j = i * i ; j < 1001 ; j += i) {
                nt[j] = 0;
            }
        }
    }
    

}


int main () {

    init();

    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            scanf("%d", &arr[i][j]);
            if (nt[arr[i][j]])
            {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }



    // for (int i = 1 ; i <= 100 ; i ++) {
    //     printf("%d %d\n", i ,nt[i]);
    // }


    return 0;
}