//Ian Lin
#include <iostream>
using namespace std;

char tolowercase(char c){
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }else{
        return c;
    }
    

}

int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;

    cout << c << " --> " << tolowercase(c) << endl;
}