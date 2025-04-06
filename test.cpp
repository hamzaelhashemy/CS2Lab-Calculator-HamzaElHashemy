#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
    cout << "Add: " << add(2, 3) << "\n";
    cout << "Subtract: " << subtract(5, 2) << "\n";
    cout << "Multiply: " << multiply(3, 4) << "\n";
    cout << "Divide: " << divide(10, 2) << "\n";
    cout << "Factorial: " << factorial(5) << "\n";
    cout << "GCD: " << gcd(12, 8) << "\n";
    cout << "LCM: " << lcm(4, 6) << "\n";
    cout << "Random: " << randomInRange(1, 10) << "\n";
    return 0;
}
