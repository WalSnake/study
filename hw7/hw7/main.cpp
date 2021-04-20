#include <iostream>
#include <cstdlib>
#include <fstream>

#include "mylib.h";

using namespace std;

int main()
{
    srand(time(0));
    // Task 1
    cout << "// Task 1 //" << endl;
    {
        const int mysize = 20;
        float myarr[mysize];
        MyLib::InitArray(myarr, mysize);
        MyLib::PrintArray(myarr, mysize);
        MyLib::Counter(myarr, mysize);
    }
    cout << "-----------------------------------------------------------" << endl;

    // Task 2
    cout << "// Task 2 //" << endl;
    {
#define zero2arg(n,arg) t2res=(n>=0 && n<arg)? "true" : "false";
        string t2res;
        int n;
        cin >> n;
        zero2arg(n, 50);
        cout << t2res << endl;
    }
    cout << "-----------------------------------------------------------" << endl;

    // Task 3
    cout << "// Task 3 //" << endl;
    {
#define UnbelivableHugeNumber 5
#define SwapINT(a,b) int c = a; \
        a = b; \
        b = c; 

        int myarr[UnbelivableHugeNumber];
        for (size_t i = 0; i < UnbelivableHugeNumber; i++)
        {
            cin >> myarr[i];
        }
        for (int i = 0; i < UnbelivableHugeNumber; i++)
        {
            for (int j = 0; j < (UnbelivableHugeNumber - 1); j++)
            {
                if (myarr[j] > myarr[j + 1])
                {
                    SwapINT(myarr[j], myarr[j + 1]);
                }
            }
        }
    }
    cout << "-----------------------------------------------------------" << endl;

    // Task 4
    cout << "// Task 4 //" << endl;
    {
        ofstream fout("Employee.txt");
        if (fout.is_open())
        {
            Employee* pEmployee = new Employee;
            pEmployee->id = 666;
            cout << pEmployee->id << endl;
            fout << pEmployee->id << endl;
            pEmployee->age = 33;
            cout << pEmployee->age << endl;
            fout << pEmployee->age << endl;
            pEmployee->salary = 120000;
            cout << pEmployee->salary << endl;
            fout << pEmployee->salary << endl;
            delete pEmployee;
            fout.close();
            cout << "Size of structure Employee: " << sizeof(Employee) << endl;
        }
        else
        {
            cout << "Unable to create file Employee.txt ";
        }
    }
    return 0;
}