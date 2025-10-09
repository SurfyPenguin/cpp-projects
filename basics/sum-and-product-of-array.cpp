#include <iostream>
using namespace std;

int sum_array(int array[], int size);
int product_array(int array[], int size);

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(int);

    cout << "Sum: " << sum_array(arr, size) << endl;
    cout << "Product: " << product_array(arr, size) << endl;

}

int sum_array(int array[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum;
}

int product_array(int array[], int size)
{
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        product *= array[i];
    }

    return product;
}