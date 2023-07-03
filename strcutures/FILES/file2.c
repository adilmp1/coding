#include <stdio.h>
int main()
{
    char ch;
    FILE *f1, *f2;
    f1=fopen("file2.txt","r");
    f2=fopen("file2_2.txt","w");
    while(feof(f1)==0)
    {
        ch=fgetc(f1);
        fputc(ch,f2);
    }
    printf("Successfully copied");
    fclose(f1);
    fclose(f2);
}