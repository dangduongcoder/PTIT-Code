#include <stdio.h>
#include <math.h>
#include <string.h>


void strrev(char str[]) {
    int len = strlen(str); 
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int check (int n) {

    
    char s[18], r[18];

    sprintf(s, "%d", n);

    strcpy(r, s);
    strrev(r);

    int tn = strcmp(s, r) == 0 ? 1 : 0;
    int sum = 0;
    int six = 0;

    while (n != 0)
    {
        int r = n % 10;
        sum += r;
        n /= 10;
        if (r == 6) six = 1; 
    }
    


    return six && tn && (sum % 10 == 8);
    

}


int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    } 

    for (int i = a ; i <= b ; i ++) if (check(i)) printf("%d ", i); 


    return 0;
}