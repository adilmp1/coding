#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int strrev(char str[100])
{
    int i,j,len,temp;
    len=strlen(str);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
    }
    printf("The reverse of the entered string is ");
    puts(str);
}
int main()
{
    char a[100];
    system("clear");
    printf("Enter a string: ");
    gets(a);
    strrev(a);
}