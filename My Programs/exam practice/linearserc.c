#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[20],key;
    system("clear");
    printf("Enter the string: ");
    gets(s);
    printf("Enter the character to search: ");
    scanf("%c",&key);

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==key)
        {
            printf("The character is found at position %d\n",i+1);
        }
    }
}