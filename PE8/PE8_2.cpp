//Ian Lin
#include <iostream>
using namespace std;

int multiply(int a, int b){
    return a*b;
}

int main(){
    int a = 5;
    int b = 6;

    cout << endl;
    cout << "The product of 5 times 6 is " << multiply(a,b) << "." << endl;
    cout << endl;

    return 0;
}