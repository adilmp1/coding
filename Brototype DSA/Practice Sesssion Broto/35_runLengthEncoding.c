#include <stdio.h>
void runLengthEncoder(char str[])
{
    int i,count=1;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            if(count>9)
            {
                printf("9%c%d%c",str[i],count-9,str[i]);
            }
            else
            {
                printf("%d%c",count,str[i]);
            }
            count=1;
        }
    }
}
int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%s",str);

    // char str[]="wwwwaaadexxxxxx";
    runLengthEncoder(str);
}