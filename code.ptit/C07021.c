#include <stdio.h>


struct SinhVien 
{
    char name[100];
    int id;
    float mark1;
    float mark2;
    float mark3;
    float sum;
};


int main () {


    int cnt = 0;

    struct SinhVien db[1000];

    while (1 < 2)
    {
        int option;
        scanf("%d\n", &option);

        if (option == 1) {

            int n; 
            scanf("%d\n", &n);
            int t = n;
            while (n--)
            {
                db[cnt].id = cnt + 1;
                gets(db[cnt].name);
                scanf("%f %f %f\n", &db[cnt].mark1, &db[cnt].mark2, &db[cnt].mark3);
                db[cnt].sum = db[cnt].mark1 + db[cnt].mark2 + db[cnt].mark3;
                cnt ++;
            }
            printf("%d\n", t);
            

        } else if (option == 2) {
            int n;
            scanf("%d\n", &n);
            gets(db[n - 1].name);
            scanf("%f %f %f\n", &db[n - 1].mark1, &db[n - 1].mark2, &db[n - 1].mark3);
            db[n - 1].sum = db[n - 1].mark1 + db[n - 1].mark2 + db[n - 1].mark3;

            printf("%d\n", n);

        } else break;

    }

    for (int i = 0 ; i < cnt - 1 ; i ++) {
        for (int j = i + 1 ; j < cnt ; j ++) {
            if (db[i].sum > db[j].sum) {
                struct SinhVien tmp = db[i];
                db[i] = db[j];
                db[j] = tmp;
            }
        }
    }
    
    for (int i = 0 ; i < cnt ; i ++) {
        printf("%d %s %.1f %.1f %.1f\n", db[i].id, db[i].name, db[i].mark1, db[i].mark2, db[i].mark3);
    }
    

    return 0;
}