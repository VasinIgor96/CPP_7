#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number1, number2;
    cout << "Введіть перше ціле число: ";
    cin >> number1;
    cout << "Введіть друге ціле число: ";
    cin >> number2;

    cout << "Числа, на які обидва числа діляться без залишку:" << endl;
    for (int i = 1; i <= number1 && i <= number2; i++) {
        if (number1 % i == 0 && number2 % i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
