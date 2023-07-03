#include <stdio.h>
#include <string.h>
int main()
{
    char a[3][2][10];
    int i,j,re[3],c1=0,c2=0,c3=0;
    system("clear");
    printf("Enter competitions: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%s",a[i][j]);
        }
    }
    printf("Enter results: ");
    for(i=0;i<3;i++)    
    {
        scanf("%d",&re[i]);
    }
    for(i=0;i<3;i++)
    {
        if(re[i]==1)
        {
            if(i==0)
            {
                c1++;
            }
            else if(i==1)
            {
                c2++;
            }
            else
            {
                c3++;
            }
        }
        else if(re[i]==0)
        {
            if(i==0)
            {
                c2++;
            }
            else if(i==1)
            {
                c3++;
            }
            else
            {
                c1++;
            }
        }
    }

    int large = (c1>c2)?(c1>c3 ?c1:c3):(c2>c3?c2:c3);
    if(c1==large)
    {
        printf("%s has one the game",a[0][0]);
    }
    else if(c2==large)
    {
        printf("%s has one the game",a[1][0]);
    }
    else
    {
        printf("%s has one the game",a[2][0]);
    }


}