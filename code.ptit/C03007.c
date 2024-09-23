#include <stdio.h>


int nt[1000000];

void snt() {

    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2 ; i < 1000000 ; i ++) {
        nt[i] = 1;
    }

    for (int i = 2 ; i*i < 1000000 ; i ++) {
        if (nt[i] == 1) {
            for (int j = i * i; j < 1000000; j += i) {
                nt[j] = 0;
            }
        }
    }

}


int stn(int n) {


    char s[12];


    sprintf(s, "%d", n);

    int l = strlen(s);


    for (int i = 0 ; i < l ; i ++) {
        if (s[i] != s[l-i-1]) {
            return 0;
        }
    }

    return 1;

}


int main () {

    snt();
    int n;

    scanf("%d", &n);


    int arr[n][2];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i][0]);
        scanf("%d", &arr[i][1]);
    }

     //printf("%d \n", nt[2]);

    for (int i = 0 ; i < n ; i ++) {
        int c = 0;
        for (int j = arr[i][0] ; j <= arr[i][1] ; j ++) {
            if (nt[j] == 1 && stn(j) == 1) {
                printf("%d ", j);
                c++;
                if (c == 10) {
                    printf("\n");
                    c = 0;
                }
            }
        }
        printf("\n");
        printf("\n");
    }


    return 0;
}
