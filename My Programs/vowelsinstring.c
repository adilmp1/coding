#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int count=0,i;
    char str[20];
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
    }

    printf("The number of vowels in the string is %d",count);

}