#include <bits/stdc++.h>

int main() {
    std::vector<int> numbers = {10, 5, 10, 15, 10, 5};
    int min = INT_MAX, max = 0;
    int result[2];  // Initialize result array
    std::map<int, int> freq;

    // Populate frequency map and find min/max frequencies
    for (auto it = numbers.begin(); it < numbers.end(); it++) {
        int newValue = ++freq[*it];  // Increment frequency count for current element
        if (newValue < min) {
            min = newValue;  // Update min frequency
        }
        if (newValue > max) {
            max = newValue;  // Update max frequency
        }
    }

    bool foundMin = false, foundMax = false;

    // Find elements with min and max frequencies
    for (auto element : numbers) {
        if (freq[element] == min && !foundMin) {
            result[0] = element;  // Store element with min frequency
            foundMin = true;  // Set flag to true
        }
        if (freq[element] == max && !foundMax) {
            result[1] = element;  // Store element with max frequency
            foundMax = true;  // Set flag to true
        }
        if (foundMin && foundMax) {
            break;  // Break when both are found
        }
    }

    std::cout << "Element with min frequency: " << result[0] << std::endl;
    std::cout << "Element with max frequency: " << result[1] << std::endl;

    return 0;
}
