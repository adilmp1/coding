#include <stdio.h>
int poww(int x, int y)  
{  
    int power = 1, i;  
    for (i = 1; i <= y;i++)  
    {  
        power = power * x;  
          
    }  
    return power;  
} 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows(n): ");
    scanf("%d", &n);
    int arr[n][4];

    printf("Enter the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
            sum += arr[i][j] * poww(2, 3 - j);
        if (sum < 10)
            printf("%d\n", sum);
        else
            printf("%c\n", sum + 55);
    }

    return 0;
}