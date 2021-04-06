#include <iostream>
#include <cmath>
//#include <clocale> // Для вызова функции setlocale

using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian"); // подключаем русский язык в консоли
    //Task #1

    //Variables declaration
    short int na = {};
    int ia = {};
    long long lTD = {};
    char cd = {};
    bool bd = {};
    float fPi = {};
    double dPc = {};

    //Variables initialisation
    na = 2;
    ia = 50;
    lTD = pow(na, ia);
    cd = 'A';
    bd = true;
    fPi = 3.14f;
    dPc = 6.62607015;

    /*Task #2,3
    Tic-Tac-Toe charset and array*/
    enum ttt { empty, cross, zero }; //game char set
    const int size = 3;
    ttt array[size] = { empty, zero, cross };

    /*Task #4
    struct for tic-tac-toe*/
    struct tttfield
    {
        ttt field[3][3]{ {empty,empty,empty},{empty,empty,empty},{empty,empty,empty} };
        bool FieldEmpty; 
        bool P1PlaysX;
        bool P2PlaysX;
        bool P1GoesFirst;
        bool OnGoing;
        char Result;
        bool P1_WIN;
        bool P2_WIN;
        bool WITHDRAW;
        short int P1_Score;
        short int P2_Score;
    };


    /*Task #5
    struct with union and flags*/
    union someunion
    {
        int nn;
        float fn;
        char cl;
    };
    struct someboolean
    {
        someunion un;
        unsigned int IsInt : 1;
        unsigned int IsFloat : 1;
        unsigned int IsChar : 1;
    };
    someboolean st;
    {
        st.IsInt = 1;
        st.IsInt = 0;
        st.IsFloat = 1;
        st.IsFloat = 0;
        st.IsChar = 1;
        st.IsChar = 0;
    }
    return 0;
}