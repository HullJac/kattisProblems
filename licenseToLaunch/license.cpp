#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int numDays;
    std::cin >> numDays;

    std::vector <int> v(numDays);
    for (auto& i : v) {
        std::cin >> i;
    }

    int minIndex = std::min_element(v.begin(), v.end()) - v.begin();
    std::cout << minIndex << std::endl;

    return 0;
}
