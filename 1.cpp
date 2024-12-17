#include <iostream>
using namespace std;
void Rev(int number, int base) {
    if (number < 0 || base < 2 || base > 36) {
        return;
    }
    char res[32]; // Массив для хранения результата
    int index = 0;
    do {
        int ostatok = number % base;
        if (ostatok < 10) {
            res[index++] = '0' + ostatok; 
        }
        else {
            res[index++] = 'A' + (ostatok - 10); 
        }
        number /= base;
    } while (number > 0);

    //вывод в обратном порядке
    for (int i = index - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    Rev(27, 16);
    Rev(13, 5);  
    Rev(35, 18); 
    return 0;
}
