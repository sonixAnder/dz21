#include <iostream>
using namespace std;

bool isPerfectNumber(int number)
{
    int sum = 1;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0) 
        {
            sum += i;
            if (i * i != number)
            {
                sum += number / i;
            }
        }
    }
    return sum == number && number != 1;
}

void findPerfectNumbersInRange(int start, int end) 
{
    cout << "Совершенные числа в диапазоне от " << start << " до " << end << ": ";
    for (int i = start; i <= end; i++)
    {
        if (isPerfectNumber(i)) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int start, end;

    cout << "Введите начало интервала: ";
    cin >> start;

    cout << "Введите конец интервала: ";
    cin >> end;

    findPerfectNumbersInRange(start, end);

    return 0;
}