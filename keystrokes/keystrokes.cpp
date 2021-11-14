#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    
    std::string password = "";
    int pos = 0;

    for (const auto& ch : s) {
        if (ch == 'L') {
            pos--;
        }
        else if (ch == 'R') {
            pos++;
        }
        else if (ch == 'B') {
            pos--;
            password.erase(password.begin() + pos);
        }
        else {
            password.insert(password.begin() + pos, ch);
            pos++;
        }
    }
    std::cout << password << std::endl;

    return 0;
}
