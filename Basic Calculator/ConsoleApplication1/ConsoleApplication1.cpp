#include <iostream>
using namespace std;

float main()
{
    float a, b;

    cout << "a : ";                      cin >> a;
    cout << "b : ";                      cin >> b;

    char operation;
    cout << "CHOOSE OPERATION [* + - /]";
    cin >> operation;

    float result;

 


     if (operation == '+')
        cout << a << " + " << b << " = " << a + b << endl;
    else if (operation == '-')
        cout << a << " - " << b << " = " << a - b << endl;
    else if (operation == '*')
        cout << a << " * " << b << " = " << a * b << endl;
    else if (operation == '/')
        if (b!=0)
        cout << a << " / " << b << " = " << a / b << endl;
    else
        cout << "WRONG IMPUT";
        
    
}
