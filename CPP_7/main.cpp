#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y;
    cout << "Введіть число x: ";
    cin >> x;
    cout << "Введіть степінь y: ";
    cin >> y;

    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }

    cout << x << " у степені " << y << " = " << result << endl;

    return 0;
}