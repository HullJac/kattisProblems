#include <iostream>
#include <regex>
#include <string>
#include <map>

// Order the cups how they should be stacked based on the size of the cup

// If the number is first cut it in half because it was doubled
int main() {
    int numCups;
    std::cin >> numCups;
    std::string s1;
    std::string s2;

    std::map<int, std::string> m; 
    auto const reg = std::regex("^[0-9]");

    for (int i = 0; i < numCups; i++) {
        std::cin >> s1;
        std::cin >> s2;
        if (std::regex_search(s1, reg)) {
            int intFirst = stoi(s1);
            intFirst = intFirst/2;
            m.insert({intFirst, s2});
        }
        else {
            int intSecond = stoi(s2);
            m.insert({intSecond, s1});
        }
    }

    for (auto const &pair : m) {
        std::cout << pair.second << std::endl;
    }

    return 0;
}
