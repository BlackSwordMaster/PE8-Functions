//Ian Lin
#include <iostream>
using namespace std;

bool isValid(int x){
    if(x>1 && x<20){
        return true;
    }else {
        return false;
    }
}

int main(){
    int x;

    cout << "Enter an integer from 1 to 20 inclusive: ";
    cin >> x;

    if(isValid(x))//use to check if the number is in range
    {
        cout << "The number is in range" << endl;
    }else{
        cout << "The number is not in range" << endl;
    }

    return 0;


}


