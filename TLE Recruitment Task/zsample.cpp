#include <iostream>
#include <vector>
#include <list>
int j=0;
    int i=0;
int recursiveSum(std::vector<int>& numbers) {
    // Base case: if the list contains two single-digit numbers, return their sum
    if (numbers.size() == 2 && numbers[0] < 10 && numbers[1] < 10) {
        return numbers[0] * 10 + numbers[1];
    }
    // Calculate the sum of the first and last numbers
    int sum = numbers[j++] + numbers[numbers.size() - 1];

    // Remove the first and last elements from the list
    numbers.erase(numbers.begin());
    numbers.pop_back();

    // Convert the sum to a string
    std::string sumString = std::to_string(sum);
    // numbers.insert(numbers.begin(),1);
    // Split the sum into individual digits and add them to the list
    numbers.insert(numbers.begin(),sum);
    // for (char digit : sumString) {
    //     numbers.insert(numbers.begin()+i,digit - '0');
    // }

    // Recursive call with the updated list
    return recursiveSum(numbers);
}

int main() {
    std::vector<int> numbers = {4,2, 3, 1};
    // std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};
    int result = recursiveSum(numbers);
    std::cout << "Recursive sum: " << result << std::endl;

    return 0;
}
