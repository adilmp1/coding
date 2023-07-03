#include <stdio.h>
int main()
{
    int n,m,key,i,j;
    system("clear");
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the search element: ");
    scanf("%d",&key);

    // int m=3,n=4,i,j,key,flag=0;
    // system("clear");
    // int a[3][4]={1,3,5,7,10,11,16,20,23,30,34,60};
    // printf("Enter the search element: ");
    // scanf("%d",&key);

    // 1   3   5   7  

    // 10  11  16  20

    // 23  30  34  60

    i = 0;
    j = n-1;
    while (i < m && j >= 0)
    {
        if (a[i][j] == key)
        {
            printf("[%d,%d]", i,j);
            return;
        }
        else if(a[i][j]<key)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    printf("-1");
}