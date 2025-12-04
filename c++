#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int sum = 0;
    int number;

    while (true) {
        cout << "[ + ] Введите число: ";
        cin >> number;

        if (number == 0) {
            break; // завершение цикла при вводе 0
        }

        sum += number; // добавляем число к сумме
    }

    cout << "[ + ] Сумма: " << sum << endl;

    return 0;
}
