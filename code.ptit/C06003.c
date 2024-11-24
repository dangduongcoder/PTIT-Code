#include <stdio.h>

void solve() {

    char s[204];

    fgets(s, sizeof(s), stdin);

    int c = 0;
    int i = 0;
    int in_word = 0; 

    while (s[i] != '\0') {
        if (s[i] != ' ' && s[i] != '\n') {
            if (!in_word) {
                c++; 
                in_word = 1; 
            }
        } else {
            in_word = 0; 
        }
        i++;
    }
    
    printf("%d\n", c);

}

int main() {

    int n;
    scanf("%d\n", &n);

    while (n--)
    {
        solve();
    }
    
    
    

    return 0;
}