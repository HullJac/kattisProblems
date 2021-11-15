#include <iostream>
#include <vector>
#include <algorithm>

// Find the first day that has the least amount of space trash in the area.
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
