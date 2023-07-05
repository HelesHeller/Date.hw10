#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    // ��������� ��'���� Date
    Date date(1, 1, 2022);

    // ��������� ����
    cout << "��������� ����: " << date << endl;

    // ��������� ��� �� 1
    date.incrementDay();

    // ��������� ���� ���� ��������� ���
    cout << "���� ���� ��������� ���: " << date << endl;

    // �������������� �������� ++
    date++;
    cout << "���� ���� �������������� ��������� ++: " << date << endl;

    // �������������� �������� +=
    date += 5;
    cout << "���� ���� �������������� ��������� +=: " << date << endl;

    // ������������ �� int (��������� ������� �����)
    int length = static_cast<int>(date);
    cout << "������� �����: " << length << endl;

    // �������� �� ������ ���� ���
    Date otherDate(5, 1, 2022);
    if (date == otherDate) {
        cout << "���� ���" << endl;
    }
    else {
        cout << "���� �� ���" << endl;
    }

    return 0;
}
