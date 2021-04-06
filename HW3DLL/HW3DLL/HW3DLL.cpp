#include "pch.h"
#include <utility>
#include <limits.h>
#include <iostream>
#include "HW3DLL.h"

using namespace std;

// DLL internal state variables:
extern const int a;
extern const int b;
extern const int c;
extern const int d;
float e;
extern const int nTask2Const;
int nTask2Var;
int nTask2Result;
int Array[3][3][3];

// Task 1
float task_one()
    {
        const int a = 6;
        const int b = 9;
        const int c = 7;
        const int d = 5;
        float e = static_cast <float> (a) * (float (b) + (float (c) / d));
        cout << a << "*(" << b << "+(" << c << "/" << d << "))=" << e << endl;

        return 0;
    };

// Task 2
int task_two()
    {
        const int nTask2Const = 21;

        cout << "Enter integer number" << endl;
        cin >> nTask2Var;

        nTask2Result = (nTask2Var > nTask2Const) ? (nTask2Var - nTask2Const) * 2 : (nTask2Const - nTask2Var);
        cout << nTask2Result;

        return 0;
    };

// Task 3
int task_three()
    {
        int *pArr;
        pArr = nullptr;
        int Array[3][3][3];
        pArr = & Array[1][1][1];
        *pArr = 13;
        cout << *pArr << endl;

        return 0;
    };