#include <stdio.h>
#include <string.h>
int main()
{
    int count,i,j;
    char s[20];
    system("clear");
    printf("Enter the string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        count=1;
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                count++;
                s[j]='`';
            }
        }
        if(s[i]!='`')
        {
            printf("\n%c - %d",s[i],count);
        }
    }
    
}
