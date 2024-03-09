#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            return i; // Если ключ найден в массиве, возвращаем индекс его первого вхождения
        }
    }
    return -1; // Если ключ не найден, возвращаем -1
}

int main() 
{
    setlocale(LC_ALL, "ru");
    int arr[] = { 5, 3, 8, 2, 9, 1 };
    int n = sizeof(arr) / sizeof(arr[0]); // Определение размера массива
    int key = 8; // Искомый ключ

    int result = linearSearch(arr, n, key);

    if (result != -1) 
    {
        cout << "Ключ " << key << " найден в массиве на позиции " << result << endl;
    }
    else 
    {
        cout << "Ключ " << key << " не найден в массиве" << endl;
    }

    return 0;
}