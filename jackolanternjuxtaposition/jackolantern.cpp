#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int main() {
    std::vector <int> v(3);
    for (auto& i : v)
        std::cin >> i;

    std::cout<<
        std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>())
    <<std::endl;

    return 0;
}
