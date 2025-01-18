#include <stdio.h>
#include <string.h>


int main () {


    int n = -1;
    
    scanf("%d", &n);

    while (n != 0)
    {

        char s1[n + 5];
        char s2[n + 5];
        char s[n + n + 5];
        char tmp[n + n + 5];


        scanf("%s", &s1);
        scanf("%s", &s2);
        scanf("%s", &s);

        int c = 0;


        while (strcmp(s, tmp) != 0 && c <= n*n + 1)
        {
            
            for (int i = 0 ; i < n ; i ++) {
                tmp[2*i] = s2[i];
                tmp[2*i + 1] = s1[i];
            }

            tmp[n + n] = '\0';
            
            // printf("%s\n", tmp);

            for (int i = 0 ; i < n ; i ++) {
                s1[i] = tmp[i];
            }

            s1[n] = '\0';

            for (int i = 0 ; i < n ; i ++) {
                s2[i] = tmp[n + i];
            }

            s2[n] = '\0';

            c++;
        }

        printf("%d\n", strcmp(s, tmp) == 0 ? c : -1);
        

        scanf("%d", &n);

    }
    


    

    return 0;
}