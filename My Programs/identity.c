#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, row, col;
    system("clear");
    printf("Enter the oder of Matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the array \n");
    int arr[10][10]; // Matrix

    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("Enter Element a%d%d: ", row + 1, col + 1);
            scanf("%d", &arr[row][col]);
        }
    }

    // Printing the matrix

    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("%d  ", arr[row][col]);
        }
        printf("\n");
    }

    // checking

    int flag;
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            if (row == col && arr[row][col] == 1)
            {
                flag = 0;
                break;
            }
            else if (row != col && arr[row][col] != 0)
            {
                flag=1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("Identical");
    }
    else 
        printf("Not identical");
}