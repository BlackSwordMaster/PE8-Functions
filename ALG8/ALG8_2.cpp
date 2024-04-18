#include <iostream>
#include <string>
using namespace std;

string reverse(string s){
    string reversed = "";

    for(int i = s.length()-1; i>=0; --i){
        reversed += s[i];
    }
    return reversed;

}

int main(){
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string reversed = reverse(input);

    cout << reversed << endl;
    return 0;
}