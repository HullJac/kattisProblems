#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        if (i%2==0)
            std::cout << s << std::endl;
    }

    return 0;
}
