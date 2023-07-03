#include <iostream>
#include <string>

int getCharacterFrequency(const std::string& inputString, char character) {
    int frequency = 0;
    for (char ch : inputString) {
        if (ch == character) {
            frequency++;
        }
    }
    return frequency;
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    char character;
    std::cout << "Enter a character: ";
    std::cin >> character;

    int frequency = getCharacterFrequency(inputString, character);
    std::cout << "Frequency of character '" << character << "' in the string: " << frequency << std::endl;

    return 0;
}
