#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    // Створення об'єкта Date
    Date date(1, 1, 2022);

    // Виведення дати
    cout << "Початкова дата: " << date << endl;

    // Збільшення дня на 1
    date.incrementDay();

    // Виведення дати після збільшення дня
    cout << "Дата після збільшення дня: " << date << endl;

    // Перевантаження операцій ++
    date++;
    cout << "Дата після перевантаження оператора ++: " << date << endl;

    // Перевантаження операцій +=
    date += 5;
    cout << "Дата після перевантаження оператора +=: " << date << endl;

    // Перетворення до int (отримання довжини рядка)
    int length = static_cast<int>(date);
    cout << "Довжина рядка: " << length << endl;

    // Перевірка на рівність двох дат
    Date otherDate(5, 1, 2022);
    if (date == otherDate) {
        cout << "Дати рівні" << endl;
    }
    else {
        cout << "Дати не рівні" << endl;
    }

    return 0;
}
