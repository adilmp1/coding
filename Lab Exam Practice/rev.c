#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int rev(char str[20])
{
    int len,i,j;char temp;
    len=strlen(str);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
}
int main()
{
    char name[20];
    system("clear");
    printf("Enter name: ");
    gets(name);
    printf("Reversed: ");
    rev(name);
}