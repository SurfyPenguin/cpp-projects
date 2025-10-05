#include <iostream>
using namespace std;

int main()
{
    // initialize variables
    int a = 1;
    int b = 5;
    int temp;

    // print before swap
    cout << "before: ";
    cout << "a = " << a << ", b = " << b << endl;

    // perform swap
    temp = a;
    a = b;
    b = temp;
    
    // print after swap
    cout << "after: ";
    cout << "a = " << a << ", b = " << b << endl;
}