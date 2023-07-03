#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");
    FILE *fp;
    char ch;
    fp=fopen("one.txt","w");
    printf("Enter data: ");
    while ((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    fclose(fp);
    fp=fopen("open.txt","r");
    while ((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
    
}