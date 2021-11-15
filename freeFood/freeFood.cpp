#include <iostream>
#include <vector>
#include <set>

// Add all the numbers of the days that have free food to a set and get the size of the set
int main() {
    std::set <int> s;    // The set
    int total;      // Holds the total of the unique days
    int numRows;    // How many events there are
    int start;      // Start of event
    int end;        // End of the event
    bool first = true; // Boolean to make input easier

    std::cin >> numRows;

    std::vector <int> v(2);
    for (auto i = 0; i < numRows; i++) {
       for (auto& j : v) {
            std::cin >> j;
            if (first) {
                start = j;
                first = !first;
            }
            else {
                end = j;
                first = !first;
            }
       }
       for (int n = start; n <= end; n++) {
            s.insert(n);
       }
    }

    std::cout << s.size() << std::endl;
    
    return 0;
}
