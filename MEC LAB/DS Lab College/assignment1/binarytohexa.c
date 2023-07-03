#include <stdio.h>
int main()
{
    long int bin, hex=0, rem, i=1;
    system("clear");
    printf("Enter the binary number: ");
    scanf("%ld",&bin);
    while(bin!=0)
    {
        rem = bin%10;
        hex=hex+rem*i;
        i*=2;
        bin/=10;
    }
    printf("%lx",hex);
}