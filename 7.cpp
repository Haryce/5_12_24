#include <iostream>
using namespace std;
void Reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1; 
    while (start < end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };
    cout << "исходный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    Reverse(arr, size);
    cout << "перевернутый массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
