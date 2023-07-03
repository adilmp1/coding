#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    char name[65][25];
    char temp[25];
    system("clear");
    printf("Enter the number of students: ");
    scanf("%d",&n);
    getchar();
    for (i = 0; i < n; i++)
    {
        printf("Enter name of student %d: ",i+1);
        gets(name[i]);
    }

    for(i=0;i<n-1;i++)
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

    for (i = 0; i < n; i++)
    {
        puts(name[i]);
        printf("\n");
    }
    
    
}