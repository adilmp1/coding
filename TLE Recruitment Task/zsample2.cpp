#include <iostream>
#include <vector>
#include <list>

using namespace std;
int recursiveSum(std::vector<int> &numbers)
{
    if(numbers.size()==1)
    {
        return numbers[0];
    }
    if (numbers.size() == 2 && numbers[0] < 10 && numbers[1] < 10)
    {
        int answer=numbers[0]*10+numbers[1];
        return answer;
    }
    int n = numbers.size();
    int i, j;
    int mid = (n - 1) / 2;
    int ind = 0;
    int inde = 0;
    for (i = 0, j = n - 1; i <= mid && j > mid; i++, j--)
    {
        int sum = numbers[i] + numbers[j];
        numbers.erase(numbers.begin() + inde);
        inde++;
        numbers.pop_back();
        numbers.insert(numbers.begin() + ind, sum);
        ind++;
    }
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > 9)
        {
            int num = numbers[i];
            numbers.erase(numbers.begin() + i);
            numbers.insert(numbers.begin() + i, num / 10);
            numbers.insert(numbers.begin() + i + 1, num % 10);
        }
    }
    if (numbers.size() != 2)
    {
        recursiveSum(numbers);
    }
    else
    {
        int answer=numbers[0]*10+numbers[1];
        return answer;
    }
}
int main()
{
    std::vector<int> numbers = {2,5,1,9};
    cout<<recursiveSum(numbers);
    return 0;
}
