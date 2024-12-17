#include <iostream>
using namespace std;
void MnMx(const int* arr, int size, int& Min, int& Max) {
    if (size <= 0) {
        cout << "Массив пуст." << endl;
        return;
    }
    Min = *arr;
    Max = *arr; 
    const int* end = arr + size; 
    for (const int* ptr = arr + 1; ptr < end; ++ptr) {
        if (*ptr < Min) {
            Min = *ptr; 
        }
        if (*ptr > Max) {
            Max = *ptr;
        }
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 5;
    int arr[size] = { 3, 1, 4, 1, 5 };
    int Min, Max;
    MnMx(arr, size, Min, Max);
    cout << "Минимум: " << Min << endl;
    cout << "Максимум: " << Max << endl;

    return 0;
}
