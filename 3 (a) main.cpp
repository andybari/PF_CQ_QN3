#include <iostream>

// Function to calculate the sum of integers between 'first' and 'last' inclusive
int sum_from_to(int first, int last) {
    // Initialize sum variable
    int sum = 0;

    // Check if 'first' is greater than 'last'
    if (first > last) {
        std::cout << "The first number should not be greater than the last number." << std::endl;
        return 0; // or handle it differently if needed
    }

    // Iterate from 'first' to 'last' and calculate the sum
    for (int i = first; i <= last; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int first, last;

    // Get user input
    std::cout << "Enter the first integer: ";
    std::cin >> first;
    std::cout << "Enter the last integer: ";
    std::cin >> last;

    // Calculate the sum and print the result
    int result = sum_from_to(first, last);
    std::cout << "The sum of integers from " << first << " to " << last << " is: " << result << std::endl;

    return 0;
}
