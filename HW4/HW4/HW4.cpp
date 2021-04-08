// Home work 4

#include <iostream>

using namespace std;

int main()
{
    // Task one
    cout << "// Task one //" << endl;

    int iT1a;
    int iT1b;

    cout << "Enter two integer numbers" << endl;
    cin >> iT1a >> iT1b;
    cout << "Summ of these two numbers is belongs to range from 10 to 20: ";
    if (iT1a + iT1b >= 10 && iT1a + iT1b <= 21)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    cout << "---------------------------------------------------------------------------------------" << endl;

    // Task two
    cout << "// Task two //" << endl;

    const int ciT2a = iT1a;
    const int ciT2b = iT1b;

    cout << "Both given numbers or their summ equals 10: ";
    if (ciT2a == 10 && ciT2b == 10)
    {
        cout << "true" << endl;
    }
    else
    {
        if (ciT2a + ciT2b == 10)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    cout << "---------------------------------------------------------------------------------------" << endl;

    // Task three
    cout << "// Task three //" << endl;

    int iT3 = 1;
    do {
        if (iT3 % 2 != 0)
        {
            cout << iT3;
            iT3++;
        }
        else
        {
            cout << " ";
            iT3++;
        }
    } while (iT3 <= 50);
    cout << "" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;

    // Task Four
    cout << "// Task four //" << endl;

    int iNum; // Number
    int iDiv; // Divider
    bool TempRes; // Temporary logic result

    cout << "Enter integer number" << endl;
    cin >> iNum;
    iDiv = 2;
    
    if (iNum != 1)
    {
        do {
            if (iNum % iDiv != 0)
            {
                TempRes = true;
                iDiv++;
            }
            else
            {
                TempRes = false;
                break;
            }
        } while (iDiv < iNum);
    }
    else
    {
        TempRes = true;
    }
    
    if (TempRes == true)
    {
        cout << "It is a simple number" << endl;
    }
    else
    {
        cout << "It is NOT a simple number" << endl;
    }
    
    cout << "---------------------------------------------------------------------------------------" << endl;
    return 0;
}