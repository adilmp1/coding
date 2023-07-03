#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;
long long trappingWater(int arr[], int n)
{
    long long answer=0;
    int l[n],r[n];
    l[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        l[i] = max(l[i-1],arr[i]);
    }
    r[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        r[i] = max(r[i+1],arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        answer+=max(0,min(l[i],r[i])-arr[i]);
    }
    return answer;
}

int main()
{
    int a[] = {7,4,0,9};
    int n = 4;
    cout<<trappingWater(a,n);
}