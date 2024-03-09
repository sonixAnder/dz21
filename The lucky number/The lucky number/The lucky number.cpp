#include <iostream>
#include <string>
using namespace std;

bool isLuckyNumber(int number) 
{
    string numString = to_string(number);

    if (numString.length() != 6) 
    {
        return false;
    }

    int sumLeft = 0;
    int sumRight = 0;

    for (int i = 0; i < 6; i++) 
    {
        if (i < 3) 
        {
            sumLeft += numString[i] - '0';
        }
        else 
        {
            sumRight += numString[i] - '0';
        }
    }

    return sumLeft == sumRight;
}

int main() 
{
    setlocale(LC_ALL, "ru");
    int number;
    cout << "Введите шестизначное число: ";
    cin >> number;

    if (isLuckyNumber(number)) 
    {
        cout << "Данное число является 'счастливым' шестизначным числом!" << std::endl;
    }
    else 
    {
        cout << "Данное число не является 'счастливым' шестизначным числом." << std::endl;
    }

    return 0;
}