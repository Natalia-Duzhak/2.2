//Source.cpp
#include <Windows.h> 
#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double N;

    Money a,b, c(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    cout << "Ввід першої кількості номіналів::" << endl;
    cin >> a;
    cout << a << endl << endl;
    cout << "Ввід другої кількості номіналів::" << endl;
    cin >> b;
    cout << b << endl << endl;

    cout << "a + b = " << a + b;
    cout << "a - b = " << a - b;
    cout << "(a + b)*N = " << a * b;

  

    
    Money t3;
    cout << "m3 = " << c << endl;
    t3 = ++c;
    cout << "m3 = ++m2: \n" << "m2 = " << c << "m3 = " << t3 << endl;
    t3 = --c;
    cout << "m3 = --m2: \n" << "m2 = " << c << "m3 = " << t3 << endl;
    t3 = c++;
    cout << "m3 = m2++: \n" << "m2 = " << c << "m3 = " << t3 << endl;
    t3 = c--;
    cout << "m3 = m2--: \n" << "m2 = " << c << "m3 = " << t3 << endl;

    return 0;
}