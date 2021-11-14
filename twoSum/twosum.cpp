#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::vector<int> arr;
    std::string input;
    getline(std::cin, input);
    std::istringstream is(input);
    int total = 0;
    int num;
    
    while(is >> num) {
        total += num;
    }
    
    std::cout << total << std::endl;

    return 0;
}
