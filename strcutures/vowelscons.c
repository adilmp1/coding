#include <stdio.h>
int main()
{
    int i,vow=0,cons=0;
    char str[20];
    system("clear");
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
        {
            vow++;
        }
        else
            cons++;
    }


    printf("vowels = %d\n",vow);
    printf("consanents = %d",cons);
}