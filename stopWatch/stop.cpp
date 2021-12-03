#include <iostream>

int main() {
    int numClicks;
    std::cin >> numClicks;
    if (numClicks % 2 == 1) {
        std::cout << "still running" << std::endl;
        return 0;
    }

    int total = 0;

    for (int i = 0; i < numClicks; i += 2) {
        int one;
        int two;
        std::cin >> one;
        std::cin >> two;
        total += two - one;
    }

    std::cout << total << std::endl;

    return 0;
}
