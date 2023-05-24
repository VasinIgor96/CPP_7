#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    cout << "Введіть ціле число: ";
    cin >> number;

    cout << "Числа, на які " << number << " ділиться без залишку:" << endl;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
