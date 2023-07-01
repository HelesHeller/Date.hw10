#include <iostream>
#include "Date.h"

int main() {
    // ��������� ��'���� Date
    Date date(1, 1, 2022);

    // ��������� ����
    std::cout << "��������� ����: " << date << std::endl;

    // ��������� ��� �� 1
    date.incrementDay();

    // ��������� ���� ���� ��������� ���
    std::cout << "���� ���� ��������� ���: " << date << std::endl;

    // �������������� �������� ++
    date++;
    std::cout << "���� ���� �������������� ��������� ++: " << date << std::endl;

    // �������������� �������� +=
    date += 5;
    std::cout << "���� ���� �������������� ��������� +=: " << date << std::endl;

    // ������������ �� int (��������� ������� �����)
    int length = static_cast<int>(date);
    std::cout << "������� �����: " << length << std::endl;

    // �������� �� ������ ���� ���
    Date otherDate(5, 1, 2022);
    if (date == otherDate) {
        std::cout << "���� ���" << std::endl;
    }
    else {
        std::cout << "���� �� ���" << std::endl;
    }

    return 0;
}
