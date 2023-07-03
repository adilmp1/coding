#include <stdio.h>
int main()
{
    int i,j,count;
    char str[1000];
    system("clear");
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count=1;
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
                str[j]='`';
            }
        }
        if(str[i]!='`')
        {
            printf("%c - %d\n",str[i],count);
        }
    }
}