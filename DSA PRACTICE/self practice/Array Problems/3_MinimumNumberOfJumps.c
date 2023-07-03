#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50], n, i, count = 0,k=0;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    readArray(a, n);
    for(i=0,k=0;i<n;i+=a[k],k++)
    {
        count++;
    }
    printf("%d", count);
}