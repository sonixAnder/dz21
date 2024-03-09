#include <iostream>
#include <cmath>
using namespace std;

double power(double base, int exponent) 
{
    return pow(base, exponent);
}

int main() 
{
    setlocale(LC_ALL, "ru");
    double base;
    int exponent;

    cout << "Введите основание степени: ";
    cin >> base;

    cout << "Введите показатель степени: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << "Результат: " << result << endl;

    return 0;
}