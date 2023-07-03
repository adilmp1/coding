#include <stdio.h>
#include <stdlib.h>
struct students
{
    char name[20];
    int mark;
};
int main()
{
    struct students pupil[10];
    int n,sum=0,i;
    float avg;
    system("clear");
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name of student %d: ",i+1);
        getchar();
        gets(pupil[i].name);
        printf("Enter mark of student %d: ",i+1);
        scanf("%d",&pupil[i].mark);
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        sum+=pupil[i].mark;
    }

    avg=sum/n;
    printf("average = %f",avg);
}
