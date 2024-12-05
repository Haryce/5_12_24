#include <iostream>
using namespace std;
int Fact(int n) {
    if (n < 0) {
        return -1; 
    }
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;

    }
    return result;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    cout << "Введите число, для которого нужно вычислить факториал: ";
    cin >> number;
    int fact = Fact(number);
    if (fact == -1) {
        cout << "Факториал не определен для отрицательных чисел." << endl;
    }
    else {
        cout << "Факториал " << number << " равен " << fact << endl;
    }
    return 0;
}