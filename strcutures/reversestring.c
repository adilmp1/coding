#include <stdio.h>
int strl(char stri[])
{
    int i,le=0;
    for(i=0;stri[i]!='\0';i++)
    {
        le++;
    }
    return le;
}
int main()
{
    char str[20],rstr[20];
    int len,i,j;
    system("clear");
    printf("Enter the string: ");
    gets(str);
    len=strl(str)-1;
    for(i=0,j=len;str[i]!='\0';i++,j--)
    {
        rstr[i]=str[j];
    }

    puts(rstr);
    
}