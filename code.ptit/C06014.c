#include <stdio.h>
#include <string.h>


void solve() {

    char raw[81];

    fgets(raw, 81, stdin);

    raw[strcspn(raw, "\n")] = '\0';

    int pos[10][2];
    int cnt = 0;
    
    pos[0][0] = 0;

    for (int i = 0; i < strlen(raw) - 1; i++)
    {
        if (raw[i] == ' ' && ((raw[i + 1] <= 'z' && raw[i + 1] >= 'a') || (raw[i + 1] <= 'Z' && raw[i + 1] >= 'A'))) {
            pos[cnt][0] = i + 1;
            // printf("(%c)", raw[i + 1]);
        }
        if (raw[i + 1] == ' ' && ((raw[i] <= 'z' && raw[i] >= 'a') || (raw[i] <= 'Z' && raw[i] >= 'A'))) {
            pos[cnt ++][1] = i;
            // printf("[%c]", raw[i]);
        }
    }

    pos[cnt ++][1] = strlen(raw) - 1;

    for (int i = 0; i < cnt; i++)
    {
        printf("%c", raw[pos[i][0]] <= 'z' && raw[pos[i][0]] >= 'a' ? raw[pos[i][0]] + 'A'-'a' : raw[pos[i][0]]);
        for (int j = pos[i][0] + 1; j <= pos[i][1]; j++)
        {
            printf("%c", raw[j] <= 'Z' && raw[j] >= 'A' ? raw[j] - 'A' + 'a' : raw[j]);
        }
        printf(" ");
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
    

    return 0;
}