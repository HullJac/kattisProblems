#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// Use a vector of 365 and check each that has a day on it and accumulate on the array.
//
// Add all the numbers of the days that have free food to a set and get the size of the set
int main() {
    std::vector<int> days(365);// The vector
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
            days[n-1] = 1;
       }
    }

    std::cout << std::accumulate(days.begin(), days.end(), 0) << std::endl;
    
    return 0;
}
