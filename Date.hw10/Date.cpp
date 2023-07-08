#include "Date.h"
#include "String"//тут

Date::Date() : day(1), month(1), year(2000) {}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

void Date::incrementDay() {
    day++;
}

std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << date.day << '/' << date.month << '/' << date.year;
    return os;
}

std::istream& operator>>(std::istream& is, Date& date) {
    is >> date.day >> date.month >> date.year;
    return is;
}

bool operator==(const Date& date1, const Date& date2) {
    return (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year);
}

bool operator!=(const Date& date1, const Date& date2) {
    return !(date1 == date2);
}

bool operator>(const Date& date1, const Date& date2) {
    if (date1.year > date2.year)
        return true;
    else if (date1.year == date2.year && date1.month > date2.month)
        return true;
    else if (date1.year == date2.year && date1.month == date2.month && date1.day > date2.day)
        return true;
    else
        return false;
}

bool operator<(const Date& date1, const Date& date2) {
    return !(date1 > date2) && (date1 != date2);
}

Date operator+(const Date& date, int days) {
    Date result = date;
    result += days;
    return result;
}

Date operator-(const Date& date, int days) {
    Date result = date;
    result -= days;
    return result;
}

Date& Date::operator+=(int days) {
    if (days >= 0) {
        int yearsToAdd = days / 365;
        int remainingDays = days % 365;

        year += yearsToAdd;
        while (remainingDays > 0) {
            int daysInMonth = 31; // Assume all months have 31 days

            if (month == 4 || month == 6 || month == 9 || month == 11)
                daysInMonth = 30;
            else if (month == 2) {
                // Check for leap year
                if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
                    daysInMonth = 29;
                else
                    daysInMonth = 28;
            }

            if (remainingDays >= daysInMonth) {
                month++;
                remainingDays -= daysInMonth;

                if (month > 12) {
                    month = 1;
                    year++;
                }
            }
            else {
                day += remainingDays;
                if (day > daysInMonth) {
                    day -= daysInMonth;
                    month++;
                    if (month > 12) {
                        month = 1;
                        year++;
                    }
                }
                remainingDays = 0;
            }
        }
    }
    else {
        int yearsToSubtract = -days / 365;
        int remainingDays = -days % 365;

        year -= yearsToSubtract;
        while (remainingDays > 0) {
            int daysInMonth = 31; // Assume all months have 31 days

            if (month == 5 || month == 7 || month == 10 || month == 12)
                daysInMonth = 30;
            else if (month == 3) {
                // Check for leap year
                if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
                    daysInMonth = 29;
                else
                    daysInMonth = 28;
            }

            if (remainingDays >= daysInMonth) {
                month--;
                remainingDays -= daysInMonth;

                if (month < 1) {
                    month = 12;
                    year--;
                }
            }
            else {
                day -= remainingDays;
                if (day < 1) {
                    month--;
                    if (month < 1) {
                        month = 12;
                        year--;
                    }
                    day += daysInMonth;
                }
                remainingDays = 0;
            }
        }
    }

    return *this;
}

Date& Date::operator-=(int days) {
    return (*this += (-days));
}

Date Date::operator++() {
    return (*this += 1);
}

Date Date::operator++(int) {
    Date temp = *this;
    ++(*this);
    return temp;
}

Date Date::operator--() {
    return (*this -= 1);
}

Date Date::operator--(int) {
    Date temp = *this;
    --(*this);
    return temp;
}

bool Date::operator!() const {
    return (day == 0 && month == 0 && year == 0);
}

int Date::getLengthOfString() const//тут
{
    std::string dateString = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
    return dateString.length();
}
