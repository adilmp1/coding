#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], ra[20];
    int i,j,len;
    printf("Enter the string: ");
    gets(a);
    len=strlen(a)-1;
    for(i=len,j=0;(*(a+i))!='\0';j++,i--)
    {
        *(ra+j)=*(a+i);
    }
    puts(ra);

    
}