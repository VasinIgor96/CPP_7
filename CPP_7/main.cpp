#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A;
    cout << "Введіть ціле число А: ";
    cin >> A;

    int sum = 0;
    int temp = A;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (A * A == sum * sum * sum) {
        cout << "Куб суми цифр числа " << A << " дорівнює " << A * A << endl;
    }
    else {
        cout << "Куб суми цифр числа " << A << " не дорівнює " << A * A << endl;
    }

    return 0;
}
