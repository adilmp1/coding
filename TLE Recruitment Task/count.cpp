#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

std::string unscrambleLoveLetter(const std::string& letter) {
    std::stringstream ss(letter);
    std::string word;
    std::vector<std::string> words;

    // Split the input letter into individual words
    while (ss >> word) {
        words.push_back(word);
    }

    // Unscramble each word
    for (std::string& w : words) {
        std::sort(w.begin(), w.end());
    }

    // Reconstruct the unscrambled letter
    std::string unscrambledLetter;
    for (const std::string& w : words) {
        unscrambledLetter += w + " ";
    }

    // Remove the trailing space
    unscrambledLetter.pop_back();

    return unscrambledLetter;
}

int main() {
    std::string letter = "ahppy vlenietas dy";
    std::string unscrambled = unscrambleLoveLetter(letter);
    std::cout << unscrambled << std::endl;

    return 0;
}
