#include <iostream>

int main() {
    int perMonth, numMonths, currMonth;
    int total = 0;
    std::cin >> perMonth;
    std::cin >> numMonths;
    for (int i = 0; i < numMonths; i++){
        std::cin >> currMonth;
        total += perMonth;
        total -= currMonth;
    }
    
    total += perMonth;
    std::cout << total << std::endl;

    return 0;
}
