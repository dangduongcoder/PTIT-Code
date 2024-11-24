#include <stdio.h>

struct Student
{
    int index;
    char name[100];
    char born[100];
    float mark;
};



int main() {

    int n;
    scanf("%d\n", &n);

    struct Student student[n];


    for (int i = 0; i < n; i++)
    {
        student[i].index = i + 1;
        fgets(student[i].name, 100, stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';
        fgets(student[i].born, 100, stdin);
        student[i].born[strcspn(student[i].born, "\n")] = '\0';
        float mark; student[i].mark = 0;
        scanf("%f\n", &mark); student[i].mark += mark;
        scanf("%f\n", &mark); student[i].mark += mark;
        scanf("%f\n", &mark); student[i].mark += mark;
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (student[i].mark < student[j].mark || (student[i].mark == student[j].mark && student[i].index > student[j].index)) {
                struct Student tmp = student[i];
                student[i] = student[j];
                student[j] = tmp;
            }
        }
        
    }

    float maxMark = student[0].mark;

    for (int i = 0; i < n; i++)
    {
        if (student[i]. mark == maxMark) {
            printf("%d %s %s %.1f\n", student[i].index, student[i].name, student[i].born, student[i].mark);
        } else {
            break;
        }
    }
    
    


    return 0;
}