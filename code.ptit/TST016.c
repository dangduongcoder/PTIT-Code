#include <stdio.h>
#include <string.h>

int main() {

    char s[1000];

    gets(s);

    // printf("%s\n", s);

    char stack[strlen(s) + 2];
    stack[0] = ' ';
    for (int i = 0; i < strlen(s) + 2; i++)
    {
        stack[i] = ' ';
    }
    

    int index = 1;

    // for (int i = 0; i < strlen(s); i++)
    // {
    //     printf("%d ", s[i]);
    // }
    // printf("\n");
    

    for (int i = 0 ; i < strlen(s) ; i ++) {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(' ) {
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
            case 39:
                if (stack[index - 1] == 39) {
                    stack[index - 1] = ' ';
                    index --;
                } else {
                    stack[index ++] = s[i];
                }
                break;
            case 34:
                if (stack[index - 1] == 34) {
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

    int ok = 1;

    for (int i = 0; i < index; i++)
    {
        if (stack[i] != ' ') {
            ok = 0;
            break;
        }
    }
    
    printf("%d", ok);
    

    return 0;
}