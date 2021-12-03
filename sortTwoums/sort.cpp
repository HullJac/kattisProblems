#include <iostream>

int main() {
    int one, two;
    std::cin >> one >> two;

    if (one > two) {
        std::cout << two << " " << one << std::endl;
    }
    
    else {
        std::cout << one << " " << two << std::endl;
    }

    return 0;
}
