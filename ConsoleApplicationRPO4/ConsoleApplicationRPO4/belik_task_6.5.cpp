#include <iostream>
using namespace std;

int main() {
    system("chcp 1251");
    const int size = 7;
    float arr[size];


    cout << "Введите 7 вещественных чисел:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }


    cout << "\nОтрицательные элементы массива:\n";
    bool hasNegative = false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
            hasNegative = true;
        }
    }
    if (!hasNegative) {
        cout << "(отсутствуют)";
    }

  
    cout << "\nНецелые элементы массива:\n";
    bool hasNonInteger = false;
    for (int i = 0; i < size; ++i) {
        if ((arr[i] != static_cast<int>(arr[i])) && (arr[i] >= 0)) { 
            cout << arr[i] << " ";
            hasNonInteger = true;
        }
    }
    if (!hasNonInteger) {
        cout << "(отсутствуют)";
    }

   
    cout << "\nЦелые положительные элементы массива:\n";
    bool hasPositiveInt = false;
    for (int i = 0; i < size; ++i) {
        if ((arr[i] > 0) && (arr[i] == static_cast<int>(arr[i]))) {
            cout << arr[i] << " ";
            hasPositiveInt = true;
        }
    }
    if (!hasPositiveInt) {
        cout << "(отсутствуют)";
    }

    return 0;
}