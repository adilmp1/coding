#include <stdio.h>
#include <string.h>
void checkPalindrome(char str[])
{
    int i,flag=0;
    int len = strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=1;break;
        }
    }
    if(flag)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }

}
int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%s",str);
    checkPalindrome(str);
}