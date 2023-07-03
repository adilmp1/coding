#include <stdio.h>
int strl(char str[])
{
    int i,le=0;
    for(i=0;str[i]!='\0';i++)
    {
        le++;
    }
    return le;
}
int main()
{
    char sr[20],rs[20];
    printf("Enter the string: ");
}