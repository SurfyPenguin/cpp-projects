#include <iostream>
using namespace std;

int linear_search(int array[], int size, int target);

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(int);
    int target = 8;

    cout << "index: " << linear_search(arr, size, target) << endl;
}

int linear_search(int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}