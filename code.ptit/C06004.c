#include <stdio.h>


int main() {


    char s[50000];


    fgets(s, sizeof(s), stdin);

    int i = 0;

    int letter = 0, number = 0, other = 0;

    while (s[i] != '\n')
    {
        
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            letter ++;
        } else if ((int)s[i] <= '9' && (int)s[i] >= '0') {
            number ++;
        } else {
            other ++;
        }

        i ++;
    }
    
    printf("%d %d %d", letter, number, other);

    return 0;
}