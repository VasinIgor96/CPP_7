#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; i++) {
        sum += i;
        count++;
    }

    double average = static_cast<double>(sum) / count;

    cout << "Середнє арифметичне чисел від 1 до 1000: " << average << endl;

    return 0;
}
