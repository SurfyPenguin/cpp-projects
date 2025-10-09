#include <iostream>
using namespace std;

void print_unique(int array[], int size);
void print_intersection(int array1[], int array2[], int size1, int size2);

int main()
{
    int arr1[] = {4, 2, 7, 8, 1, 2, 5};
    int arr2[] = {9, 2, 5, 6, 8, 3, 2};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    print_unique(arr1, size1);
    print_intersection(arr1, arr2, size1, size2); // generates repeated values sometimes
}

void print_unique(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool unique = true;

        for (int j = 0; j < size; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                unique = false;
                break;
            }
        }

        if (unique)
        {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

void print_intersection(int array1[], int array2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j< size2; j++)
        {
            if (array1[i] == array2[j])
            {
                cout << array1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}