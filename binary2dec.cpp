#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long binaryNumber;
    int decimalNumber = 0, i = 0, remainder;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}
