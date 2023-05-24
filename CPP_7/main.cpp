#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A;
    cout << "Введіть ціле число А: ";
    cin >> A;

    cout << "Числа В, для яких " << A << " ділиться без залишку на В*В і не ділиться без залишку на В*В*В:" << endl;
    for (int B = 1; B <= A; B++) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << endl;
        }
    }

    return 0;
}
