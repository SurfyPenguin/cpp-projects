#include <iostream>
#include <climits> // Access INT_MAX and INT_MIN
using namespace std;

void take_input(void);
int smallest(int array[], int size);
int largest(int array[], int size);
int smallest_index(int array[], int size);
int largest_index(int array[], int size);

int main()
{
    // arrays can only store same type of data.
    // arrays are contiguous in memory.
    // arrays are also linear.

    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    cout << "Smallest: " << smallest(arr, size) << " ";
    cout << "at Index: " << smallest_index(arr, size) << endl;
    cout << "Largest: " << largest(arr, size) << " ";
    cout << "at Index: " << largest_index(arr, size) << endl;

    return 0;
}

void take_input(void)
{
    int size = 5;
    int arr[size];
    
    // take input
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // give output
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int smallest(int array[], int size)
{
    // assign positive infinity as smallest value
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        smallest = min(array[i], smallest);
    }

    return smallest;
}

int largest(int array[], int size)
{
    // assign negative infinity as largest value
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        largest = max(array[i], largest);
    }

    return largest;
}

int smallest_index(int array[], int size)
{
    int element = smallest(array, size);
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            index = i;
            return index;
        }
    }

    return index;
}

int largest_index(int array[], int size)
{
    int element = largest(array, size);
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            index = i;
            return index;
        }
    }

    return index;
}