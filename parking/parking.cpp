#include <iostream>
#include <vector>
#include <algorithm>

// Find the shortest distance to walk based on the stores needed to go to

// Take the largest minus the smallest and double that
int main() {
    int numCases;
    std::cin >> numCases;

    int numStores;
    for (int i = 0; i < numCases; i++) {
        std::cin >> numStores;
        std::vector<int> v(numStores);
        for (auto& i : v) {
            std::cin >> i;
        }
        
        std::sort(v.begin(), v.end());
        int distance = v.back() - v.front();
        distance = distance * 2;
        std::cout << distance << std::endl;
    }

    return 0;
}
