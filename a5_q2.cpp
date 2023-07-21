#include <iostream>
using namespace std;

int countZerosInBinary(int num) {
    int count = 0;
    bool foundOne = false;

    while (num > 0) {
        if ((num & 1) == 0 && foundOne) {
            count++;
        } else if ((num & 1) == 1) {
            foundOne = true;
        }
        num >>= 1;
    }

    return count;
}

int main() {
    int num;
    cout << "Enter a natural number: ";
    cin >> num;

    int zeroCount = countZerosInBinary(num);
    cout << "Number of 0's in the binary representation of " << num << ": " << zeroCount << endl;

    return 0;
}
