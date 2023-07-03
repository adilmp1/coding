#include <iostream>
#include <map>

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::map<char, std::pair<int, int>> charMap;

    for (int i = 0; i < inputString.length(); ++i) {
        char ch = inputString[i];
        
        // Check if the character already exists in the map
        auto it = charMap.find(ch);
        if (it == charMap.end()) {
            // Character does not exist in the map, add the pair
            charMap[ch] = std::make_pair(i, i * 2);
            std::cout << "Character added successfully." << std::endl;
        } else {
            // Character already exists in the map
            std::cout << "Character already exists in the map. Pair not added." << std::endl;
        }
    }

    // Display the contents of the map
    std::cout << "Map contents:" << std::endl;
    for (const auto& pair : charMap) {
        std::cout << "Character: '" << pair.first << "', Index: " << pair.second.first
                  << ", Number: " << pair.second.second << std::endl;
    }

    return 0;
}
