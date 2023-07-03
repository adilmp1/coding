#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int subset(int a[], int n)
{
    int i,j;
    int c=0;
    for(i = 0; i < n; i++)
    {
        for(j=i+1;j<n;j++)
        {
            printf("%d  %d",a[c],a[j]);
        }
        c++;
    }
}
int main()
{
    int a[50], n, i, j;
    system("clear");
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
    readArray(a, n);
    subset(a,n);
}