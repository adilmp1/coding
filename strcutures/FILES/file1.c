#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    system("clear");
    fp=fopen("file.txt","r");
    while (feof(fp)==0)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }   
    fclose(fp);
}