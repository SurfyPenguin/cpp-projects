#include <iostream>
using namespace std;

int main()
{
    const double STATE_TAX = 0.04;
    const double COUNTY_TAX = 0.02;
    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    double stateTax = sales * STATE_TAX;
    double countyTax = sales * COUNTY_TAX;
    double totalTax = stateTax + countyTax;

    cout << "State Tax: $" << stateTax << " County Tax: $" << countyTax << endl
         << "Total Tax: $" << totalTax << endl;

}