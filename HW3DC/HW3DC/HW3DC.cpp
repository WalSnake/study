#include <iostream>
#include "vars.cpp"

using namespace std;

int nTask2Var;
int nTask2Result;
int Array[3][3][3];

int main()
{
// Task 1
        extern const int a;
        extern const int b;
        extern const int c;
        extern const int d;
        float e = static_cast <float> (a) * (float (b) + (float (c) / d));
        cout << a << "*(" << b << "+(" << c << "/" << d << "))=" << e << endl;

// Task 2

        const int nTask2Const = 21;

        cout << "Enter integer number" << endl;
        cin >> nTask2Var;

        nTask2Result = (nTask2Var > nTask2Const) ? (nTask2Var - nTask2Const) * 2 : (nTask2Const - nTask2Var);
        cout << nTask2Result << endl;

// Task 3
    int *pArr;
    pArr = nullptr;
    int Array[3][3][3]{ 0 };
    pArr = &Array[1][1][1];
    *pArr = 13;
    cout << *pArr << endl;

    return 0;
}