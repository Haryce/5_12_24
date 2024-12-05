#include <iostream>
using namespace std;
void Praymugl(int h, int w) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << "*";  
        }
        cout << endl; 
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    int h, w;
    cout << "Введите высоту прямоугольника: ";
    cin >> h;

    cout << "Введите ширину прямоугольника: ";
    cin >> w;
    Praymugl(h, w);
    return 0;
}