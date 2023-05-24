#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    cout << "Введіть значення a: ";
    cin >> a;

    int sum = 0;
    for (int i = a; i <= 500; i++) {
        sum += i;
    }

    cout << "Сума цілих чисел від " << a << " до 500: " << sum << endl;

    return 0;
}