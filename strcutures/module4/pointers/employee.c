#include <stdio.h>
struct emp
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    int n, i;
    struct emp *e, e1;
    system("clear");
    e = &e1;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &((e + i)->id));
        printf("Name: ");
        gets(((e + i)->name));
        printf("Salary: ");
        scanf("%d", &((e + i)->salary));
    }

    for (i = 0; i < n; i++)
    {
        if (((e + i)->salary) > 10000)
        {
            printf("Employee %d\n", i + 1);
            printf("ID: ");
            printf("%d\n", &((e + i)->id));
            printf("Name: ");
            gets(((e + i)->name));
            printf("Salary: ");
            printf("%d", &((e + i)->salary));
        }
    }
}