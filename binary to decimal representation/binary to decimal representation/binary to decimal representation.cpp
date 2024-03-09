#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(std::string binaryNum)
{
    int decimalNum = 0;
    int base = 1;

    for (int i = binaryNum.size() - 1; i >= 0; i--)
    {
        if (binaryNum[i] == '1') 
        {
            decimalNum += base;
        }
        base *= 2;
    }

    return decimalNum;
}

int main()
{
    setlocale(LC_ALL, "ru");
    std::string binaryNum = "1101"; // Пример числа в двоичном виде
    int decimalNum = binaryToDecimal(binaryNum);

    std::cout << "Число " << binaryNum << " в десятичной системе равно " << decimalNum << std::endl;

    return 0;
}