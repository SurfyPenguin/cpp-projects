#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &vec);
void fibonacci(long n);

int main()
{
    vector<int> vec(3, 0);

    printVector(vec);
    fibonacci(10);

    return 0;
}

void printVector(vector<int> &vec)
{
    int n = vec.size();

    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << vec[i];
        if (i != n - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

void fibonacci(long n)
{
    vector<int> vec = {0, 1};
    
    for (int i = 0; i < n - 2; i++)
    {
        int size = vec.size();
        vec.push_back(vec[size - 1] + vec[size - 2]);
    }

    printVector(vec);
}