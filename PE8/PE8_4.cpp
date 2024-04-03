//Ian Lin
#include <iostream>
using namespace std;

double divison(int x,int y){
    return static_cast<double>(x)/y;

}

int main(){
    int x = 10;
    int y =3;

    cout << endl;
    cout << "10 divided by 3 is " << divison(x,y) << "." << endl;
    cout << endl;
}