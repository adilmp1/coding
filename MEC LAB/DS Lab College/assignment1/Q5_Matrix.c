#include <stdio.h>
int pow(int x, int y)  
{  
    int power = 1, i;  
    for (i = 1; i <= y;i++)  
    {  
        power = power * x;  
          
    }  
    return power;  
}  
long int bintohex(long int bin)
{
    long int hex=0, rem, i=1;
    while(bin!=0)
    {
        rem = bin%10;
        hex=hex+rem*i;
        i*=2;
        bin/=10;
    }
    return hex;
}
int main()
{
    int a[20][4],i,j,m,p;
    long int b;
    system("clear");
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    int re[m][1];
    for(i=0;i<m;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {   
        b=0;
        p=3;
        for(j=0;j<4;j++)
        {
            b+= a[i][j]*pow(10,p);
            p--;
        }
        printf("\n%lx\n",bintohex(b));
    }


}