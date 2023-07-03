#include <iostream>
#include <unordered_map>
int main() {
    std::unordered_map<char, int> charMap;
    int numPairs;

    std::cout << "Enter the number of pairs to add: ";
    std::cin >> numPairs;

    for (int i = 0; i < numPairs; ++i) {
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

    // Display the contents of the map
    std::cout << "Map contents:" << std::endl;
    for (const auto& pair : charMap) {
        std::cout << "'" << pair.first << "': " << pair.second << std::endl;
    }

    return 0;
}
