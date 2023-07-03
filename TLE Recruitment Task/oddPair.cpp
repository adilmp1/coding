#include <iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,1,2};
    int n = sizeof(a)/sizeof(a[0]);
    int odd=0;
    for(int i=0;i<n;i++)
    {
        odd = a[i]^odd;
    }
    printf("\n%d",odd);
}