#include <iostream>
using namespace std;

int sumInRange(int num1, int num2)
{
    int start = min(num1, num2);
    int end = max(num1, num2);
    int sum = 0;

    for (int i = start; i <= end; ++i) 
    {
        sum += i;
    }

    return sum;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int num1, num2;

    cout << "Введите первое целое число: ";
    cin >> num1;

    cout << "Введите второе целое число: ";
    cin >> num2;

    int result = sumInRange(num1, num2);
    cout << "Сумма чисел в диапазоне: " << result << endl;

    return 0;
}