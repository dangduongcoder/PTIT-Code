#include <stdio.h>


void solve() {


    int n;
    scanf("%d", &n);

    float arr[n + 1];

    char st[n + 1][50];

    
    

    int turn = 0;
    getchar();

    for (int i = 0 ; i < n ; i ++) {
        scanf("%s ", &st[i]);
    }

    for (int i = 0 ; i < n ; i ++) {
        scanf("%f", &arr[i]);
    }

    // printf("\n");

    while (turn < n)
    {
        for (int i = turn ; i < n - 1 ; i ++) {
            for (int j = i + 1 ; j < n ; j ++) {
                if (arr[i] > arr[j]) {
                    float t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;

                    char c[50];
                    strcpy(c, st[i]);
                    strcpy(st[i], st[j]);
                    strcpy(st[j], c);
                    // st[i] = st[j];
                    // st[j] = c;
                }
            }
        }



        
        // for (int i = 0 ; i <= turn ; i ++) {
        //     printf("%c", st[i]);
        // }

        // printf(" ");
        for (int i = turn; i < n ; i ++) {
            printf("%s ", st[i]);
        }

        printf("\n");

        for (int i = turn; i < n ; i ++) {
            printf("%.3f ", arr[i]);
        }

        arr[turn + 1] += arr[turn];
        char stmp[50];

        strcpy(stmp, st[turn]);
        strcat(stmp, st[turn + 1]);
        strcpy(st[turn + 1], stmp);

        // printf("(%s)", stmp);


        printf("\n");

        turn ++;
    }
    
}


int main() {

    int n;

    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    


    return 0;
}