#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

// Array initialization function
bool InitArray(int* arr, int size, bool t1)
{
    for (size_t i = 0; i < size; i++)
    {
        if (t1 == true)
        {
            arr[i] = pow(2, i);
        }
        else
        {
            arr[i] = rand() % 100;
        }
    }
    return true;
}

// Array print function
bool PrintArray(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return true;
}

// Task 3 vars and functions
string fname1;
string fname2;
string fname3;
string filetype;

bool EnterFileName1()
{
    filetype = (".txt");
    cout << "Enter file one name " << endl;
    cin >> fname1;
    fname1 = (fname1 + filetype);
    while (fname1 == fname2)
    {
        cout << "All names must be unique. ";
        EnterFileName1();
    };
    return true;
}
bool EnterFileName2()
{
    filetype = (".txt");
    cout << "Enter file two name " << endl;
    cin >> fname2;
    fname2 = (fname2 + filetype);
    while (fname2 == fname1)
    {
        cout << "All names must be unique. ";
        EnterFileName2();
    };
    return true;
}
/*bool EnterFileName3()
{
    filetype = (".txt");
    cout << "Enter file three name" << endl;
    cin >> fname3;
    fname3 = (fname3 + filetype);
    while (fname3 == fname1 || fname3 == fname2)
        {
            cout << "All names must be unique. ";
            EnterFileName3();
        };
    return true;
}*/

int main()
{
    srand(time(0));

    // Task 1
    cout << "// Task 1 //" << endl;
    {
        int* ptrArr;
        int n;
        cout << "Enter size of your array" << endl;
        cin >> n;
        if (n > 0)
        {
            ptrArr = new (nothrow) int[n];
            if (ptrArr != nullptr)
            {
                InitArray(ptrArr, n, true);
                PrintArray(ptrArr, n);
                delete[] ptrArr;
                ptrArr = nullptr;
            }
            else
            {
                cout << "Error! Can not allocate memory!";
            }
        }
        cout << endl;
    }
    cout << "-------------------------------------------------------------------------" << endl;

    // Task 2
    cout << "// Task 2 //" << endl;
    {
        int** ptrArr;
        const size_t m = 4;
        const size_t n = 4;


        ptrArr = new int* [m];
        for (size_t i = 0; i < m; i++)
        {
            ptrArr[i] = new int[n];
            InitArray(*ptrArr, n, false);
            PrintArray(*ptrArr, n);
        }

        for (size_t i = 0; i < m; i++)
        {
            delete[] ptrArr[i];
        }
        delete[] ptrArr;
        ptrArr = nullptr;

    }
    cout << "-------------------------------------------------------------------------" << endl;

    // Task 3
    cout << "// Task 3 //" << endl;
    {
        EnterFileName1();
        EnterFileName2();
        string text1 = { "Astronauts using Linux, because you cannot open windows in space." };
        string text2 = { "A Programmer was walking out of door for work, his wife said “while you’re out, buy some milk” and he never came home." };
        {
            ofstream fout(fname1);
            if (fout.is_open())
            {
                fout << text1 << endl;
                fout.close();
            }
            else
            {
                cout << "Unable to create file with that name. ";
                EnterFileName1();
            }
        }
        {
            ofstream fout(fname2);
            if (fout.is_open())
            {
                fout << text2 << endl;
                fout.close();
            }
            else
            {
                cout << "Unable to create file with that name. ";
                EnterFileName2();
            }
        }
    }
    cout << "-------------------------------------------------------------------------" << endl;

    // Task 4
    /*cout << "// Task 3 //" << endl;
    {
        string text1;
        string text2;
        EnterFileName3();
        while (fname3 == fname2 || fname3 == fname1);
        {
            cout << "All names must be unique. ";
            EnterFileName3();
        } 
        {
            ifstream fin(fname1);
            if (fin.is_open())
            {
                fin >> text1;
            }
            else
            {
                cout << "Unable to open file. ";
                EnterFileName1;
            }
        }
        {
            ifstream fin(fname2);
            if (fin.is_open())
            {
                fin >> text2;
            }
            else
            {
                cout << "Unable to open file. ";
                EnterFileName2;
            }
        }
        {
            ofstream fout(fname3);
            if (fout.is_open())
            {
                fout << text1 << endl;
                fout << text2 << endl;
            }
        }

    }*/
    cin.get();
    return 0;
}
