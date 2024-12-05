#include <iostream>
#include <string>
using namespace std;

// Function to simulate the Turing Machine for binary increment
string incrementBinary(string binary) {
    // Add a blank symbol (underscore) at the end
    binary += "_";
    int n = binary.size();
    int head = n - 2; // Start from the last bit (ignoring blank)

    // Turing Machine logic to increment binary
    bool carry = true; // Start with a carry for addition
    while (head >= 0 && carry) {
        if (binary[head] == '0') {
            binary[head] = '1';
            carry = false;
        } else if (binary[head] == '1') {
            binary[head] = '0';
            carry = true;
        }
        head--;
    }

    // If carry remains after processing all bits, prepend a '1'
    if (carry) {
        binary = "1" + binary;
    }

    // Remove blank symbol before returning the result
    binary.pop_back();
    return binary;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    // Validate input to ensure it contains only '0' and '1'
    for (char c : binary) {
        if (c != '0' && c != '1') {
            cout << "Invalid binary number!" << endl;
            return 1;
        }
    }

    string incrementedBinary = incrementBinary(binary);
    cout << "Incremented binary number: " << incrementedBinary << endl;

    return 0;
}
