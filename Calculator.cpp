#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;
    cout << "Введите первое число, операцию и второе число (например, 5 + 3): ";
    cin >> num1 >> operation >> num2;

    switch (operation) {
    case '+':
        cout << "Результат: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Результат: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Результат: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0.0)
            cout << "Результат: " << num1 / num2 << endl;
        else
            cout << "Ошибка: Деление на ноль!" << endl;
        break;
    default:
        cout << "Ошибка: Неподдерживаемая операция!" << endl;
    }

}