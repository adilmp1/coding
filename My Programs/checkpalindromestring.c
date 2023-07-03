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
    if(!strcmp(str,rstr))
        printf("String is palindrome");
    else    
        printf("string is not palindrome");
}