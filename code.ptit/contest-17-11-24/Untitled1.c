#include <stdio.h>



int main () {


    int n = -1;

    scanf("%d", &n);

    while (n != 0)
    {

        char s1[10];
        char s2[10];
        char s[20];
        char tmp[20];


        scanf("%s", &s1);
        scanf("%s", &s2);
        scanf("%s", &s);


        while (strcmp(s, tmp) != 0)
        {

            for (int i = 0 ; i < n ; i ++) {
                tmp[2*i] = s2[i];
                tmp[2*i + 1] = s1[i];
            }

            tmp[n + n] = '\0';

            printf("%s\n", tmp);

            for (int i = 0 ; i < n ; i ++) {
                s1[i] = tmp[i];
            }

            s1[n] = '\0';

            for (int i = 0 ; i < n ; i ++) {
                s2[i] = tmp[n + i];
            }

            s2[n] = '\0';
        }


        scanf("%d", &n);

    }





    return 0;
}
