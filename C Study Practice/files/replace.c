#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char t[1000];
    int i,j,len;
    system("clear");
    printf("Enter the text: ");
    gets(t);
    len=strlen(t);
    for(i=0;i<len;i++)
    {
        if(t[i]==' - ' || t[i]==' ' || t[i]=='(' || t[i]==')' || t[i]=='-' || t[i]=='_')
        {
            t[i]='..';
        }
    }

    for(i=0;i<len;i++)
    {
        if(t[i]=='.')
        {
            for(j=i;j<len-1;j++)
            {
                t[j]=t[j+1];
            }
        }
    }


    printf("The replaced text is : \n");
    puts(t);
}