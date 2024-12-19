#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void Roll(int& die1, int& die2) { 
    die1 = rand() % 6 + 1; //случайное число от 1 до 6
    die2 = rand() % 6 + 1; //случайное число от 1 до 6
}
void Dice(int die1, int die2) {
    cout << "Кубики: " << die1 << " и " << die2 << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0)); 
    int pScore = 0; //очки человека
    int cScore = 0; //очки пк
    const int round = 5;
    cout << "Кто делает ход первым 1 - человек 2 - компьютер: ";
    int firstTurn;
    cin >> firstTurn;
    for (int i = 0; i < round; ++i) {
        int pDie1, pDie2;
        int cDie1, cDie2;
        if (firstTurn == 1) {
            // Ход человека
            cout << "Ваш ход" << endl;
            Roll(pDie1, pDie2);
            Dice(pDie1, pDie2);
            pScore += pDie1 + pDie2;

            // Ход компьютера
            cout << "Ход компьютера" << endl;
            Roll(cDie1, cDie2);
            Dice(cDie1, cDie2);
            cScore += cDie1 + cDie2;
        }
        else {
            // Ход компьютера
            cout << "Ход компьютера" << endl;
            Roll(cDie1, cDie2);
            Dice(cDie1, cDie2);
            cScore += cDie1 + cDie2;
            // Ход человека
            cout << "Ваш ход" << endl;
            Roll(pDie1, pDie2);
            Dice(pDie1, pDie2);
            pScore += pDie1 + pDie2;
        }
    }
    cout << "Итоговые результаты:" << endl;
    cout << "Сумма очков человека: " << pScore << endl;
    cout << "Сумма очков компьютера: " << cScore << endl;
    double pAvg = pScore / (double)round; // Средняя сумма для человека
    double cAvg = cScore / (double)round; // Средняя сумма для компьютера
    cout << "Средняя сумма очков человека: " << pAvg << endl;
    cout << "Средняя сумма очков компьютера: " << cAvg << endl;
    if (pScore > cScore) {
        cout << "Человек победил" << endl;
    }
    else if (cScore > pScore) {
        cout << "Компьютер победил" << endl;
    }
    else {
        cout << "Ничья" << endl;
    }
    return 0;
}
