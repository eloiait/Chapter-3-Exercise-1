#include <iostream>
using namespace std;

int main()
{
    double gallons;
    double miles;
    double milesPerGallon;

    cout << "Enter the number of gallons the car can hold: ";
    cin >> gallons;

    cout << "Enter the number of miles the car can travel on a full tank: ";
    cin >> miles; 

    milesPerGallon = miles / gallons;

    cout << "The car gets " << milesPerGallon << " miles per gallon." << endl;

    return 0;
}