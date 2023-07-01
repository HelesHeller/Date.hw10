#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int day, int month, int year);

    void incrementDay();

    friend std::ostream& operator<<(std::ostream& os, const Date& date);
    friend std::istream& operator>>(std::istream& is, Date& date);
    friend bool operator==(const Date& date1, const Date& date2);
    friend bool operator!=(const Date& date1, const Date& date2);
    friend bool operator>(const Date& date1, const Date& date2);
    friend bool operator<(const Date& date1, const Date& date2);
    friend Date operator+(const Date& date, int days);
    friend Date operator-(const Date& date, int days);
    Date& operator+=(int days);
    Date& operator-=(int days);
    Date operator++();
    Date operator++(int);
    Date operator--();
    Date operator--(int);
    bool operator!() const;
};

#endif
