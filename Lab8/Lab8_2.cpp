//Ian Lin
#include <iostream>
using namespace std;

char myletter(int x, int y){
    if(x>y){
        return 'B';
    }else if(x<y){
        return 'S';
    }else{
        return 'E';
    }

}
int main(){
    int x,y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "My letter is " << myletter(x, y) << "." << endl;
    return 0;

}

