#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    cout << "Введіть значення a (1 <= a <= 20): ";
    cin >> a;

    if (a < 1 || a > 20) {
        cout << "Некоректне значення a. Введіть число від 1 до 20." << endl;
        return 0;
    }

    int product = 1;
    for (int i = a; i <= 20; i++) {
        product *= i;
    }

    cout << "Здобуток усіх цілих чисел від " << a << " до 20: " << product << endl;

    return 0;
}
