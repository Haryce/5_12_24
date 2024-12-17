#include <iostream>
using namespace std;
int Prost(int number) {
    if (number < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1; 
}
int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    cout << "Введите число для проверки: \n";
    cin >> num;

    if (Prost(num)) {
        cout << num << " простое число\n";
    }
    else {
        cout << num << " не простое число\n";
    }
    return 0;
}