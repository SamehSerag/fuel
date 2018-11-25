#include <iostream>

using namespace std;

class Odometer{
    int fuelEfficiency , miles, mile;
public:

    /*)
    Odometer(){
        fuel = 0;
        mile = 0;
        miles = 0;
    } */

    Odometer(int fuelEfficiency){
        this -> fuelEfficiency = fuelEfficiency;
        miles = 0;
    }

    void addMiles(int m){
        miles+=m ;
       // cout << miles;
    }

    float out(){
       // cout << "miles : " << miles
         //    << "\n efficiency : " << fuelEfficiency <<endl ;
        return miles/fuelEfficiency;
       // cout <<"the fuel is : "  << mile;
    }

    void reSet(){
        miles = 0 ;
    }

};

int main()
{
    int f = 0 , mile = 0;
    while (true){
        cout << "enter fuel Efficiency :   ";
        cin >>  f;
        Odometer vehicel(f);

        cout << " while finishing please inter -1 \n"
             << " and if you want to reset miles at any time enter 0 \n";

        while (true){
            cout << "enter the miles of the trip : \n";
            cin >> mile ;
             //vehicel.print();
           //  vehicel.addMiles(mile);
            if (mile == 0){
                vehicel.reSet();
                cout << "from beginning \n" ;

            }
            else if ( mile != -1){
                vehicel.addMiles(mile);

            }
            else {
                cout << vehicel.out() ;
                cout << endl;
                break;

            }

        }
    }

    return 0;
}
