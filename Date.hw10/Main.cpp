#include <iostream>
#include "Date.h"

int main() {
    // Створення об'єкта Date
    Date date(1, 1, 2022);

    // Виведення дати
    std::cout << "Початкова дата: " << date << std::endl;

    // Збільшення дня на 1
    date.incrementDay();

    // Виведення дати після збільшення дня
    std::cout << "Дата після збільшення дня: " << date << std::endl;

    // Перевантаження операцій ++
    date++;
    std::cout << "Дата після перевантаження оператора ++: " << date << std::endl;

    // Перевантаження операцій +=
    date += 5;
    std::cout << "Дата після перевантаження оператора +=: " << date << std::endl;

    // Перетворення до int (отримання довжини рядка)
    int length = static_cast<int>(date);
    std::cout << "Довжина рядка: " << length << std::endl;

    // Перевірка на рівність двох дат
    Date otherDate(5, 1, 2022);
    if (date == otherDate) {
        std::cout << "Дати рівні" << std::endl;
    }
    else {
        std::cout << "Дати не рівні" << std::endl;
    }

    return 0;
}
