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

    int iT3 = 0;
    do {
        //cout << " ";
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

    return 0;
}