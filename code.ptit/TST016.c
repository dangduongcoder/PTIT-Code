#include <stdio.h>
#include <string.h>

int main() {

    char s[1000];

    gets(s);

    // printf("%s\n", s);

    char stack[strlen(s) + 2];
    stack[0] = ' ';
    // for (int i = 0; i < strlen(s) + 2; i++)
    // {
    //     stack[i] = ' ';
    // }
    

    int index = 1;

    for (int i = 0 ; i < strlen(s) ; i ++) {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(' || s[i] == '\'' || s[i] == '"') {
            stack[index ++] = s[i];
        } else {
            switch (s[i])
            {
            case '}':
                if (stack[index - 1] == '{') {
                    stack[index - 1] = ' ';
                } else {
                    stack[index ++] = s[i];
                }
                break;
            case ')':
                if (stack[index - 1] == '(') {
                    stack[index - 1] = ' ';
                    index --;
                } else {
                    stack[index ++] = s[i];
                }
                break;
            case ']':
                if (stack[index - 1] == '[') {
                    stack[index - 1] = ' ';
                    index --;
                } else {
                    stack[index ++] = s[i];
                }
                break;
            case '\'':
                if (stack[index - 1] == '\'') {
                    stack[index - 1] = ' ';
                    index --;
                } else {
                    stack[index ++] = s[i];
                }
                break;
            case '"':
                if (stack[index - 1] == '"') {
                    stack[index - 1] = ' ';
                    index --;
                } else {
                    stack[index ++] = s[i];
                }
                break;
            
            default:
                break;
            }
        }
        
    }

    printf("%s\n", stack);
    

    return 0;
}