#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    system("clear");
    int i,j,len;
    char str[20],rstr[20];
    printf("Enter the string: ");
    gets(str);
    len=strlen(str);
    for(i=len-1,j=0;str[i]!='\0';i--,j++)
    {
        rstr[j]=str[i];
    }
    printf("The reverse of the entered string is : ");
    puts(rstr);
}