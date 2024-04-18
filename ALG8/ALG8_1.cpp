#include <iostream>
using namespace std;

int getFirstIndex(string s, char c) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) {
            return i; // Return the index of the first occurrence of c
        }
    }
    return -1; // Return -1 if c is not found in s
}

int main() {
    string word;
    char letter;

    cout << "Enter a word (no spaces): ";
    cin >> word;

    cout << "Enter a single character: ";
    cin >> letter;

    int index = getFirstIndex(word, letter);
    if (index != -1) {
        cout << "The first index of '" << letter << "' in \"" << word << "\" is " << index << "." << endl;
    } else {
        cout << "The letter '" << letter << "' is not in the word \"" << word << "\"." << endl;
    }

    return 0;
}
