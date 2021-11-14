#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::vector<float> arr;
    std::string input;
    getline(std::cin, input);
    std::istringstream is(input);
    float num;
    
    while(is >> num) {
        arr.push_back(num);
    }
    
    float total = arr[0] * arr[1];

    std::cout << total/2 << std::endl;

    return 0;
}
