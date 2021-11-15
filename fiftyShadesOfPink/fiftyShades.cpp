#include <iostream>
#include <regex>

int main() {
    int total = 0;

    int numStrings;
    std::cin >> numStrings;

    std::string s;
    auto const reg = std::regex("(rose|pink)", std::regex::icase);
    for (int i = 0; i < numStrings; i++) {
        std::cin >> s;
        if (std::regex_search(s, reg)) {
            total ++;
        }
    }

    if (total > 0){
        std::cout << total << std::endl;
    }
    else {
        std::cout << "I must watch Star Wars with my daughter" << std::endl;    
    }

    return 0;
}
