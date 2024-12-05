#include <iostream>
#include <string>
using namespace std;

bool simulateTM(string input) {
    int n = input.length();
    
    // Check if length is divisible by 3 (must have equal a's, b's, and c's)
    if (n % 3 != 0) {
        return false;
    }
    
    int i = 0, j = n / 3, k = 2 * n / 3;
    
    while (i < n / 3 && j < 2 * n / 3 && k < n) {
        // Check if the current characters are a, b, and c respectively
        if (input[i] == 'a' && input[j] == 'b' && input[k] == 'c') {
            i++;
            j++;
            k++;
        } else {
            return false;  // The sequence doesn't match
        }
    }

    // Check if all characters are processed correctly
    if (i == n / 3 && j == 2 * n / 3 && k == n) {
        return true; // The input string is of the form a^n b^n c^n
    }
    
    return false;
}

int main() {
    string input;
    
    cout << "Enter the string (consisting of 'a', 'b' and 'c'): ";
    cin >> input;
    
    if (simulateTM(input)) {
        cout << "The string is accepted by the Turing Machine.\n";
    } else {
        cout << "The string is rejected by the Turing Machine.\n";
    }
    
    return 0;
}
