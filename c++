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
            break; 
        }

        sum += number;
    }

    cout << "[ + ] Сумма: " << sum << endl;

    return 0;
}
