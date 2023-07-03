#include <iostream>
#include <string>
#include <unordered_map>

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
    std::unordered_map<char, int> charMap;
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    for (char ch:string) {
        char character;
        int number;

        std::cout << "Enter character: ";
        std::cin >> character;

        std::cout << "Enter number: ";
        std::cin >> number;

        // Check if the character already exists in the map
        auto it = charMap.find(character);
        if (it == charMap.end()) {
            // Character does not exist in the map, add the pair
            charMap[character] = number;
            std::cout << "Character added successfully." << std::endl;
        } else {
            // Character already exists in the map
            std::cout << "Character already exists in the map. Pair not added." << std::endl;
        }
    }
    return 0;
}
