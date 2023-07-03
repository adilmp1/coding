#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f1;
    int i,j,len;
    char str[30], rev[30];
    f1=fopen("file2.txt","r");
    while(feof(f1)==0)
    {
        fscanf(f1,"%s",str);
        len=strlen(str)-1;
        for(i=len,j=0;str[i]!='\0';i--,j++)
        {
            rev[j]=str[i];
        }
        puts(rev);
    }
    fclose(f1);
}