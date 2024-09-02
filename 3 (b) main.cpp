#include <iostream>
// Function to compute the greatest common divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Function to reduce a fraction
int reduce(int &num, int &denom) {
    // Check for invalid input
    if (num <= 0 || denom <= 0) {
        return 0; // Failure to reduce
    }
    // Compute the GCD of num and denom
    int divisor = gcd(num, denom);
    // Reduce num and denom by their GCD
    num /= divisor;
    denom /= divisor;
    return 1; // Success
}
int main() {
    int num, denom;
    // Get user input for numerator and denominator
    std::cout << "Enter numerator: ";
    std::cin >> num;
    std::cout << "Enter denominator: ";
    std::cin >> denom;
    // Attempt to reduce the fraction
    int result = reduce(num, denom);

    if (result == 1) {
        std::cout << "The reduced fraction is: " << num << "/" << denom << std::endl;
    } else {
        std::cout << "Error: Numerator and denominator must be positive integers." << std::endl;
    }
    return 0;
}
