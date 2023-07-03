#include <iostream>
#include <vector>

int recursiveSum(std::vector<int>& numbers) {
    // Base case: if the list contains only one element, return it
    if (numbers.size() == 1) {
        return numbers[0];
    }

    // Calculate the sum of the first and last numbers
    int sum = numbers[0] + numbers[numbers.size() - 1];

    // Remove the first and last elements from the list
    numbers.erase(numbers.begin());
    numbers.pop_back();

    // Convert the sum to a string
    std::string sumString = std::to_string(sum);

    // Split the sum into individual digits and add them to the list
    for (char digit : sumString) {
        numbers.push_back(digit - '0');
    }

    // Recursive call with the updated list
    return recursiveSum(numbers);
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};
    int result = recursiveSum(numbers);
    std::cout << "Recursive sum: " << result << std::endl;

    return 0;
}
