#include <stdio.h>
int main()
{
    int i,j,flag;
    int count=0;
    printf("The prime numbers till 100 are\n");
    for(i=2;i<=100;i++)
    {
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if (flag==1)
        {
            count++;
            printf("\n%d",i);
        }
        
    }
    printf("\nThe number of prime numbers till 100 = %d",count);
    return 0;
}
