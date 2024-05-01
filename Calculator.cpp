#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    string operation;
    cout << "Введите первое число, операцию и второе число (например, 5 + 3): ";
    cin >> num1 >> operation >> num2;

    if (operation == "+") 
        cout << "Результат: " << num1 + num2 << endl;
    else if (operation == "-")
        cout << "Результат: " << num1 - num2 << endl;
    else if (operation == "*")
        cout << "Результат: " << num1 * num2 << endl;
    else if (operation == "/")
        if (num2 != 0.0)
            cout << "Результат: " << num1 / num2 << endl;
        else
            cout << "Ошибка: Деление на ноль!" << endl;
    else
        cout << "Ошибка: Неподдерживаемая операция!" << endl;

}
