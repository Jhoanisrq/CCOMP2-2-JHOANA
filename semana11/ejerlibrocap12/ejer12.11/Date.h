// Date.h
#ifndef DATE_H
#define DATE_H

class Date {
public:
    Date(int day, int month, int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;

private:
    int day;
    int month;
    int year;
};

#endif // DATE_H