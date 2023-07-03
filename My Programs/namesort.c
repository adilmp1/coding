#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name[65][25],temp[25];
    int i,j,n;
    system("clear");
    printf("Enter the number of students: ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        printf("Enter the name of student %d: ",i+1);
        gets(name[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(name[j],name[j+1])>0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }

    printf("The sorted names are: \n");
    for(i=0;i<n;i++)
    {
        puts(name[i]);
    }
}