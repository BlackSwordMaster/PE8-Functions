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

    do{
    
        cout << "Enter an integer from 1 to 20 inclusive: ";
        cin >> x;

        if(!isValid(x)){
            cout << "The number is not in range" << endl;
        }

    }while(!isValid(x));
        cout << "The number is in range" << endl;

    return 0;


}
