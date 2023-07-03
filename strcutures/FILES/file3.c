#include <stdio.h>
int main()
{
    FILE *f1;
    int count=0;
    char ch;
    f1=fopen("file3.txt","r");
    while(feof(f1)==0)
    {
        ch=fgetc(f1);
        if(ch=='\n')
        {
            count++;
        }
    }
    count++;
    printf("number of lines = %d",count);
    fclose(f1);
}