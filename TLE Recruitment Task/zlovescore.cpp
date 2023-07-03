#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
int getCharacterFrequency(const std::string &inputString, char character)
{
    int frequency = 0;
    for (char ch : inputString)
    {
        if (ch == character)
        {
            frequency++;
        }
    }
    return frequency;
}
int recursiveSum(std::vector<int> &numbers)
{
    if (numbers.size() == 1)
    {
        return numbers[0];
    }
    if (numbers.size() == 2 && numbers[0] < 10 && numbers[1] < 10)
    {
        int answer = numbers[0] * 10 + numbers[1];
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
        int answer = numbers[0] * 10 + numbers[1];
        return answer;
    }
}
int main()
{
    int ind = 0;
    std::unordered_map<char, int> charMap;
    string person;
    string crush;
    string string;
    cout << "Enter your name: ";
    getline(std::cin, person);
    cout << "Enter name of your crush: ";
    getline(std::cin, crush);
    string.append(person);
    string.append("love");
    string.append(crush);
    std::vector<int> number;
    for (char ch : string)
    {
        auto it = charMap.find(ch);
        if (it == charMap.end())
        {
            charMap[ch] = getCharacterFrequency(string, ch);
            number.push_back(getCharacterFrequency(string, ch));
        }
    }
    cout << "Love score between " << person << " and " << crush << " is " << recursiveSum(number);
    return 0;
}