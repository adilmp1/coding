#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[20];
    int i,j=0;
    char temp;
    char rev[20];
    system("clear");
    printf("Enter the string: ");
    gets(str);
    int len=strlen(str);
    for(i=len-1;i>=0;i--)
    {
            rev[j]=str[i];
            j++;
        
    }
    printf("The reverse of the entered string is: ");
    puts(rev);
}