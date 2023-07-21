#include <iostream>
#include <bitset>

int main() {
    int sum = 0;

    for (int i = 1; i <= 5; ++i) {
        sum += i;
    }

    std::bitset<32> binarySum(sum);

    std::cout << "Decimal numbers: 1 to 5\n";
    std::cout << "Sum in binary format: " << binarySum << std::endl;

    return 0;
}
