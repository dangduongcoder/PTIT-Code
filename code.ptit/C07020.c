#include <stdio.h>
#include <string.h>

struct Pokemon
{
    char name[100];
    int req;
    int ava;
    int amo;
};


int main() {


    int n;
    scanf("%d\n", &n);

    struct Pokemon Pok[n];

    for (int i = 0; i < n; i++)
    {
        fgets(Pok[i].name, 100, stdin);
        Pok[i].name[strcspn(Pok[i].name, "\n")] = '\0';
        scanf("%d %d\n", &Pok[i].req, &Pok[i].ava);
        Pok[i].amo = 0;
        while (Pok[i].ava >= Pok[i].req)
        {
            Pok[i].amo ++;
            Pok[i].ava -= Pok[i].req;
            Pok[i].ava += 2;
        }
    }

    int maxIndex = 0;
    int max = 0;
    int sum = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (Pok[i].amo >= max) {
            max = Pok[i].amo;
            maxIndex = i;
        }
        sum += Pok[i].amo;
    }

    printf("%d\n%s", sum, Pok[maxIndex].name);
    
    

    return 0;
}