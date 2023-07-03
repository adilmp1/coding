#include <stdio.h>
struct emp
{
    int id;
    char name[100];
    long int salary;
};
void main()
{
    int n;
    system("clear");
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct emp *e1, e;
    e1 = &e;
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d\n", i + 1);
        printf("Id: ");
        scanf("%d", &((e1 + i)->id));
        printf("Name: ");
        scanf("%s", &((e1 + i)->name));
        printf("Salary: ");
        scanf("%ld", &((e1 + i)->salary));
    }
    printf("Employees with salary more than 10,000 \n");
    for (int i = 0; i < n; i++)
    {
        if (((e1 + i)->salary) > 10000)
        {
            printf("\nEmployee %d\n", i + 1);
            printf("Id: ");
            printf("%d", (e1 + i)->id);
            printf("\nName: ");
            puts((e1 + i)->name);
            printf("Salary: ");
            printf("%ld", (e1 + i)->salary);
        }
    }
}