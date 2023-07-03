#include <stdio.h>
int main()
{
    system("clear");
    int i,j,len=0;
    char str[20],rstr[20];
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    for(i=len-1,j=0;str[i]!='\0';i--,j++)
    {
        rstr[j]=str[i];
    }
    printf("The reverse of the entered string is : ");
    puts(rstr);
}