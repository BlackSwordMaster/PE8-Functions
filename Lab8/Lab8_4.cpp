//Ian Lin
#include <iostream>
#include <iomanip>
using namespace std;


double calculate(int volt, int reis){
    return static_cast<double>(volt)/reis;
}


int main(){
    int intvolt,reis,incVolt;

    do{
        cout << endl;
        cout << "Enter the initial volateg (up to 50 in volt): ";
        cin >> intvolt;

        if(intvolt>=50){
            cout << "Voltage cannot be equal or greater than 50. Please re-enter" << endl;
          }
        }while(intvolt>=50);

        cout << "Enter the resistance (in ohm): ";
        cin >> reis;

        cout <<"Enter the voltage incremental interval (in volt): ";
        cin >> incVolt;

        cout << endl;

        cout << "Voltage (volt)   Resistance (ohm)   Current (amp)" << endl;
        cout << "--------------   ----------------   --------------" << endl;


        for (int voltage = intvolt; voltage < 50; voltage += incVolt) {
        double current = calculate(voltage, reis);
        cout << voltage << setw(17) << reis << setw(21) << fixed << setprecision(2) << current << endl;
    }
    return 0;

    }
    
