#include <iostream>
#include <string>
#include <algorithm>

bool isNumber(const std::string& s) {
    for (char c : s) {
        if (!isdigit(c)) { // checks if it is not symbol(number)
            return false;
        }
    }
    return true;
}

int main() {
    std::string word1, word2;
    std::cout << "Enter first word: ";
    std::getline(std::cin, word1);
    std::cout << "Enter second word: ";
    std::getline(std::cin, word2);
    if (isNumber(word1) || isNumber(word2)) {
        std::cout << "You entered numbers, not strings \n";
        return 0;
    }
    std::sort(word1.begin(), word1.end());
    std::sort(word2.begin(), word2.end());
    long int max = 0;
    if (word1.size() < word2.size()) {
        max = word2.size();
    } else {
        max = word1.size();
    }
    
    for (int i = 0; i < max; i++) {
        if (word1[i] != word2[i]) {
            std::cout << "Words are not same \n";
            return 0;
        }
    }
    std::cout << "Words are same \n";
    return 0;
}
