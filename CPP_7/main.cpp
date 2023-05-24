#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int k;
    cout << "Введіть номер варіанта: ";
    cin >> k;

    cout << "Таблиця множення на " << k << ":" << endl;
    for (int i = 2; i <= 9; i++) {
        int result = k * i;
        cout << k << " x " << i << " = " << result << endl;
    }

    return 0;
}
