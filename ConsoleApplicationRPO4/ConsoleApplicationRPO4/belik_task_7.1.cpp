#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int rows = 5;
const int columns = 8;

void printArray(int matrix[][columns]) {
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < columns; ++c) {
            cout << matrix[r][c] << '\t';
        }
        cout << endl;
    }
}

int main() {
    srand(time(nullptr));

    int matrix[rows][columns];

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < columns; ++c) {
            matrix[r][c] = rand() % 100;
        }
    }

    cout << "Матрица размеров 5 x 8:\n";
    printArray(matrix);

    int totalSum = 0;
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < columns; ++c) {
            totalSum += matrix[r][c];
        }
    }
    cout << "Сумма элементов массива: " << totalSum << endl;

    int maxValue = matrix[0][0];
    int minValue = matrix[0][0];

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < columns; ++c) {
            if (matrix[r][c] > maxValue) {
                maxValue = matrix[r][c];
            }
            if (matrix[r][c] < minValue) {
                minValue = matrix[r][c];
            }
        }
    }

    cout << "Максимальное значение: " << maxValue << endl;
    cout << "Минимальное значение: " << minValue << endl;

    return 0;
}