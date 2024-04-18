#include <iostream>
using namespace std;

void writeAsterisks(int n) {
    if (n <= 0) {
        return;  // Base case: no more asterisks to write
    }
    cout << "*";  // Write one asterisk
    writeAsterisks(n - 1);  // Recursive call to write the remaining asterisks
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num > 0) {
        writeAsterisks(num);  // Call the recursive function
        cout << endl;  // Move to a new line after writing all asterisks
    } else {
        cout << "Please enter a positive integer." << endl;
    }

    return 0;
}


