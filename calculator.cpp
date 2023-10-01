#include <iostream>
#include <string.h>
#include <conio.h>
#include <math.h>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define RESET "\x1B[0m"
float Power(float, float);
float Sine(float);
float Square(float);
float Cos(float);
float Tan(float);
float Log(float);
float Baselog(float);
double simple(float num1, float num2, char operation);
using namespace std;
main()
{
    float a, b;
    char z;

    while (z != '0')
    {
        cout << "WHAT YOU WANT TO FIND: " << endl;
        cout << GREEN << "Press '1' for Power" << RESET << ": " << endl;
        cout << GREEN << "Press '2' for Sin" << RESET << ": " << endl;
        cout << GREEN << "Press '3' for Square" << RESET << ": " << endl;
        cout << GREEN << "Press '4' for Cos" << RESET << ": " << endl;
        cout << GREEN << "Press '5' for Tan" << RESET << ": " << endl;
        cout << GREEN << "Press '6' for Log" << RESET << ": " << endl;
        cout << GREEN << "Press '7' for Base Log" << RESET << ": " << endl;
        cout << YELLOW << "Press + for addition" << RESET << ": " << endl;
        cout << YELLOW << "Press - for subtraction" << RESET << ": " << endl;
        cout << YELLOW << "Press * for multiplication" << RESET << ": " << endl;
        cout << YELLOW << "Press / for division" << RESET << ": " << endl;
        cout << RED << "Press 0 to exit" << RESET << endl;
        cin >> z;
        switch (z)
        {

        case '1':
            cout << "Enter the Number for Calculating its Power: ";
            cin >> a;
            cout << "Enter the Power for a Number: ";
            cin >> b;
            cout << "Power: " << Power(a, b);

            break;

        case '2':
            cout << "Enter the Number for Calculating SIN: ";
            cin >> a;
            cout << "Square of a Given Value is: " << Sine(a);
            break;

        case '3':
            cout << "Enter the Number for Calculating Square: ";
            cin >> a;
            cout << "Square root of a Given Value is: " << Square(a);
            break;

        case '4':
            cout << "Enter the Number for Calculating COS: ";
            cin >> a;
            cout << "COS of a Given Value is: " << Cos(a);
            break;

        case '5':
            cout << "Enter the Number for Calculating TAN: ";
            cin >> a;
            cout << "TAN of a Given Value is: " << Tan(a);
            break;

        case '6':
            cout << "Enter the Number for Calculating LOG: ";
            cin >> a;
            cout << "Answer: " << Log(a);
            break;

        case '7':
            cout << "Enter the Number for Calculating LOG WITH BASE 10: ";
            cin >> a;
            cout << Baselog(a);
            break;

        case '+':

            cout << "Enter 1st number: ";
            cin >> a;
            cout << "Enter 2nd number: ";
            cin >> b;

            cout << "Result: " << simple(a, b, '+');
            break;
        case '-':
            cout << "Enter 1st number: ";
            cin >> a;
            cout << "Enter 2nd number: ";
            cin >> b;

            cout << "Result: " << simple(a, b, '-');
            break;
        case '*':
            cout << "Enter 1st number: ";
            cin >> a;
            cout << "Enter 2nd number: ";
            cin >> b;

            cout << "Result: " << simple(a, b, '*');
            break;
        case '/':
            cout << "Enter 1st number: ";
            cin >> a;
            cout << "Enter 2nd number: ";
            cin >> b;

            cout << "Result: " << simple(a, b, '/');
            break;
            getch();
        }
        cout << endl
             << endl;
    }
}

double simple(float num1, float num2, char operation)
{
    double result;
    if (operation == '+')
    {
        result = num1 + num2;
    }
    else if (operation == '-')
    {
        result = num1 - num2;
    }
    else if (operation == '*')
    {
        result = num1 * num2;
    }
    else if (operation == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            return -1;
        }
    }
    return result;
}
float Power(float x, float y)
{
    float p;
    p = pow(x, y);
    return p;
}

float Sine(float x)
{
    float s;
    s = sin(x);
    return s;
    cout << "Sin: " << s;
}

float Square(float x)
{
    float sq;
    sq = sqrt(x);
    return sq;
}

float Cos(float x)
{
    float c;
    c = cos(x);
    return c;
    cout << "COS: " << c;
}

float Tan(float x)
{
    float t;
    t = tan(x);
    return t;
    cout << "TAN: " << t;
}

float Log(float x)
{
    float l;
    l = log(x);
    return l;
    cout << "Natural Logarithm: " << l;
}

float Baselog(float x)
{
    float bl;
    bl = log10(x);
    return bl;
    cout << "LOG with Base 10: " << bl;
}
