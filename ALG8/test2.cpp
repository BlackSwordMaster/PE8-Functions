#include <iostream>
using namespace std;

// Recursive function to print stars for each digit in n
void printStars(int n) {
    if (n <= 0) {
        return;  // Base case: no more digits to process
    }
    printStars(n / 10);  // Recursive call: process the rest of the digits

    int digit = n % 10;  // Extract the last digit
    for (int i = 0; i < digit; i++) {  // Print stars for the extracted digit
        cout << "*";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;  // Request an integer input from the console

    printStars(n);  // Call the recursive function

    return 0;
}
