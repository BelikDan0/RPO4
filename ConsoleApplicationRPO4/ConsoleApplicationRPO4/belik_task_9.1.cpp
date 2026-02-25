#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    double* array = new double[size];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; ++i)
        cin >> array[i];

    double sum = 0;
    for (int i = 0; i < size; ++i)
        sum += array[i];

    double average = sum / size;

    double minElement = array[0], maxElement = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < minElement)
            minElement = array[i];
        if (array[i] > maxElement)
            maxElement = array[i];
    }

    cout << "Сумма элементов массива: " << sum << endl;
    cout << "Среднее арифметическое: " << average << endl;
    cout << "Минимальный элемент: " << minElement << endl;
    cout << "Максимальный элемент: " << maxElement << endl;

    delete[] array;

    return 0;
}