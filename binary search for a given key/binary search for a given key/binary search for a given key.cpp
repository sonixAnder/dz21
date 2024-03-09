#include <iostream>

int binarySearch(int arr[], int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            return mid; // Если ключ найден, возвращаем индекс
        }

        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1; // Если ключ не найден, возвращаем -1
}

int main()
{
    setlocale(LC_ALL, "ru");
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15 };
    int n = sizeof(arr) / sizeof(arr[0]); // Определение размера массива
    int key = 7; // Искомый ключ
    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        std::cout << "Ключ " << key << " найден в массиве на позиции " << result << std::endl;
    }
    else {
        std::cout << "Ключ " << key << " не найден в массиве" << std::endl;
    }

    return 0;
}