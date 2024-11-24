#include <stdio.h>
#include <string.h>


struct Goods
{
    int index;
    char name[100];
    char type[100];
    float loi;
};


int main() {

    int n;
    scanf("%d\n",&n);

    struct Goods Gro[n];

    for (int i = 0; i < n; i++)
    {
        Gro[i].index = i + 1;
        fgets(Gro[i].name, 100, stdin);
        Gro[i].name[strcspn(Gro[i].name, "\n")] = '\0';
        fgets(Gro[i].type, 100, stdin);
        Gro[i].type[strcspn(Gro[i].type, "\n")] = '\0';
        float tmp;
        scanf("%f\n", &tmp);
        Gro[i].loi = 0;
        Gro[i].loi -= tmp;
        scanf("%f\n", &tmp);
        Gro[i].loi += tmp;
    }
    
        for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (Gro[i].loi < Gro[j].loi) {
                struct Goods tmp = Gro[i];
                Gro[i] = Gro[j];
                Gro[j] = tmp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %s %s %.2f\n", Gro[i].index, Gro[i].name, Gro[i].type, Gro[i].loi);
    }
    


    return 0;
}