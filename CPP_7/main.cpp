#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    cout << "Введіть ціле число: ";
    cin >> number;

    string result;
    string numberString = to_string(number);
    for (char digit : numberString) {
        if (digit != '3' && digit != '6') {
            result += digit;
        }
    }

    cout << "Результат: " << result << endl;

    return 0;
}
