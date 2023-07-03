#include <stdio.h>
#include <stdlib.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a1[50], a2[50], m, n, i, j, flag;
    system("clear");
    printf("Enter the number of elements in first set: ");
    scanf("%d", &m);
    readArray(a1, m);

    printf("Enter the number of elements in second set: \n");
    n = m - 1;
    readArray(a2, n);

    for (i = 0; i < m; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if (a1[i]==a2[j])
            {
                flag=1;
                
            }
        }
        if (flag == 0)
        {
            printf("%d", i);
            exit(0);
        }
    }
}