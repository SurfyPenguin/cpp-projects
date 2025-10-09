#include <iostream>
using namespace std;

void reverse(int array[], int size);
void print_array(int array[], int size);

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(int);

    // before
    print_array(arr, size);

    // after reverse
    reverse(arr, size);
    print_array(arr, size);
    
}

void reverse(int array[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        swap(array[i], array[j]);
        i++;
        j--;
    }
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}