#include <climits>
#include <iostream>
using namespace std;

void swapMaxMin(int array[], int size);
int smallest(int array[], int size);
int largest(int array[], int size);
int smallest_index(int array[], int size);
int largest_index(int array[], int size);
void print_array(int array[], int size);

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(int);

    swapMaxMin(arr, size);
    print_array(arr, size);
}

void swapMaxMin(int array[], int size)
{
    int minIndex = smallest_index(array, size);
    int maxIndex = largest_index(array, size);
    
    swap(array[minIndex], array[maxIndex]);
}

// ------Taken from arrays.cpp------

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

// ------Taken from reverse_array.cpp------

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