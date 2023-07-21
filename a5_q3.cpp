#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int size = binary.size();
    
    for (int i = size - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, size - i - 1);
        }
    }
    
    return decimal;
}

int findGreatestDecimal(string binary1, string binary2) {
    int decimal1 = binaryToDecimal(binary1);
    int decimal2 = binaryToDecimal(binary2);
    
    return max(decimal1, decimal2);
}

int main() {
    string binary1, binary2;
    
    cout << "Enter the first binary number: ";
    cin >> binary1;
    
    cout << "Enter the second binary number: ";
    cin >> binary2;
    
    int greatestDecimal = findGreatestDecimal(binary1, binary2);
    cout << "The greatest decimal number is: " << greatestDecimal << endl;
    
    return 0;
}
