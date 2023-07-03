#include <stdio.h>
int main() {
    int n, i, j, maxDiff = 0;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the list:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[j] - arr[i] > maxDiff) {
                maxDiff = arr[j] - arr[i];
            }
        }
    }
    printf("The maximum difference between two elements in the list is: %d\n", maxDiff);
    return 0;
}
