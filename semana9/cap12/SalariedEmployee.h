// SalariedEmployee class derived from Employee.

#ifndef SALARIED_H
#define SALARIED_H

#include <string> // C++ standard string class
#include "Employee.h" // Employee class definition

class SalariedEmployee {
public:
SalariedEmployee(const std::string&, const std::string&,
const std::string&, double = 0.0);
// virtual destructor

void setWeeklySalary(double); // set weekly salary
double getWeeklySalary() const; // return weekly salary

// keyword virtual signals intent to override


private:

};

 #endif // SALARIED_H