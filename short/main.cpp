#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 7, 3};

    std::cout << "Before sorting: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    
    std::sort(arr.begin(), arr.end());

    std::cout << "After sorting: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
