#include <stdio.h>
#include <string.h>

void solve() {

    int n;
    scanf("%d", &n);
    
    char words[15][20];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%s", &words[i]);
    }
    //getchar();

    for (int i = 0 ; i < n - 1 ; i ++) {
        for (int j = i + 1 ; j < n ; j ++) {
            char t1[25], t2[25];
            strcpy(t1, words[i]);
            strcpy(t2, words[j]);
            strcat(t1, words[j]);
            strcat(t2, words[i]);
            if (strcmp(t1, t2) > 0) {
                char temp[12];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        printf("%s", words[i]);
    }


    printf("\n");

}


int main() {
    int n;
    scanf("%d\n", &n);

    while (n--)
    {
        solve();
    }
    
}