#include <stdio.h>
#include <string.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int n,i,j,count=0,c=0;
    char str[50][20];
    int b[50];
    system("clear");
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter string %d: ",i+1);
        scanf("%s",str[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;str[i][j]!='\0';j++)
        {
            n=1;
            if(str[i][j]==str[i+n][j])
            {
                n++;
                count++;
            }
            b[c]=count;
            c++;
        }
    }
    int min=b[0];
    for(c=0;c<n;c++)
    {
        printf("%d\n",b[c]);
    }
    printf("%d",min);
}