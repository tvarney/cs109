
#include <stdint.h>
#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char **argv) {
    std::vector<uint32_t> values;
    uint32_t nboxes, v;
    
    std::cin >> nboxes;
    for(uint32_t i = 0; i < nboxes; ++i) {
        std::cin >> v;
        values.push_back(v);
    }
    std::sort(values.begin(), values.end());
    for(uint32_t i = 0; i < nboxes - 1; ++i) {
        std::cout << values[i] << " ";
    }
    std::cout << values[nboxes - 1] << "\n";
    return 0;
}
