#include <iostream>
using namespace std;

void rec_cheers(int n) {
    if (n == 1) {
        cout << "Hurray!" << endl;  // Base case: if n is 1, print "Hurray!" and end the recursion
    } else {
        cout << "Hip, ";  // Print "Hip, " for each recursive call
        rec_cheers(n - 1);  // Recursive call with n decremented by 1
    }
}

int main() {
    rec_cheers(6);  // Test the recursive function
    return 0;
}
