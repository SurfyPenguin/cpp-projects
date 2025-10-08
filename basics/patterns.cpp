#include <iostream>
using namespace std;

void pattern_1(void);
void pattern_2(void);
void pattern_3(void);
void pattern_4(void);
void pattern_5(void);
void pattern_6(void);
void pattern_7(void);
void pattern_8(void);
void pattern_9(void);
void pattern_10(void);
void pattern_11(void);
void pattern_12(void);
void pattern_13(void);
void pattern_14(void);
void pattern_15(void);

int main()
{
    pattern_15();
    return 0;
}

void pattern_1(void)
{
/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << j + 1;
        }

        cout << endl;
    }
}

void pattern_2(void)
{
/*
    * * * *
    * * * *
    * * * *
    * * * *
*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern_3(void)
{
/*
    A B C D
    A B C D
    A B C D
    A B C D
*/
    for (int i = 0; i < 4; i++)
    {
        char ch = 'A';
        for (int j = 0; j < 4; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

void pattern_4(void)
{
/*
    1 2 3
    4 5 6
    7 8 9
*/
    int num = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

void pattern_5(void)
{
/*
    A B C
    D E F
    I J K
*/
    char ch = 'A';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

void pattern_6(void)
{
/*
    *
    * *
    * * *
    * * * *
*/

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_7(void)
{
/*
    1 
    2 2
    3 3 3
    4 4 4 4
*/
    int num = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num;
        }
        cout << endl;
        num++;
    }
}

void pattern_8(void)
{
/*
    1 
    1 2
    1 2 3
    1 2 3 4
*/
    for (int i = 0; i < 4; i++)
    {
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

void pattern_9(void)
{
/*
    1
    2 1
    3 2 1
    4 3 2 1
*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern_10(void)
{
/*
    1
    2 3
    4 5 6
    7 8 9 10
*/
    int num = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " "; // whitespace to separate 10
            num++;
        }
        cout << endl;
    }
}

void pattern_11(void)
{
/*
    1 1 1 1
      2 2 2
        3 3
          4
*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 4 - i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}

void pattern_12(void)
{
/*
    A A A A
      B B B
        C C
          D
*/
    char ch = 'A';
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 4 - i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }
}

void pattern_13(void)
{
/*
       1
      121
     12321
    1234321
*/
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 3 - i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }

        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}

void pattern_14(void)
{
/*
       *
      * *
     *   *
    *     *
     *   *
      * *
       *
*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            cout << " ";
        }

        if (i != 0)
        {
            cout << "*";
        }

        for (int j = 0; j < 2*i - 1; j++)
        {
            cout << " ";
        }

        cout << "*" << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }

        if (i != 2)
        {
            cout << "*";
        }

        for (int j = 0; j < 2*(2 - i) - 1; j++)
        {
            cout << " ";
        }

        cout << "*" << endl;
    }
}

void pattern_15(void)
{
/*
    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *
*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < 2 * (3 - i); j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < 2*i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 4 - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}