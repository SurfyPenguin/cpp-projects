#include <iostream>
using namespace std;

int main()
{
    double tempF;

    cout << "Temperature (F): ";
    cin >> tempF;
    double tempC = (tempF - 32) * 5/9;
    cout << "Temperature in Celsius: " << tempC << endl;
    
    return 0;
}