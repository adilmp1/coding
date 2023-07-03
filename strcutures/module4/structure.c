#include <stdio.h>
struct det
{
    char name[20];
    char address[100];
    char dob[20];
};

int main()
{
    int i;
    struct det student[10];
    system("clear");
    for(i=0;i<2;i++)
    {
        printf("Student %d \n",i+1);
        printf("name: ");
        gets(student[i].name);
        printf("address: ");
        gets(student[i].address);
        printf("Date of Birth: ");
        gets(student[i].dob);
    }
    printf("\n\n\n\n");
    for(i=0;i<2;i++)
    {
        printf("Student %d \n",i+1);
        printf("name: ");
        puts(student[i].name);
        printf("address: ");
        puts(student[i].address);
        printf("Date of Birth: ");
        puts(student[i].dob);
    }

}