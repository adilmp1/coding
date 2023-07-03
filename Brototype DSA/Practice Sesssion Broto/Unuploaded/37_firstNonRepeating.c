#include <stdio.h>
#include <string.h>
int firstNonRepeatingCharacter(char str[])
{
    int i,j,res;
    for(i=0;str[i]!='\0';i++)
    {
        res=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j] && i!=j)
            {
                res=1;
            }
        }
        if(!res)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    // char str[50];
    // printf("Enter the string: ");
    // scanf("%s",str);

    // char str[]="abcdcaf";
    char str[]="abab";
    printf("%d",firstNonRepeatingCharacter(str));
}