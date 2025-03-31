// Employee.cpp
// Abstract-base-class Employee member-function definitions.
// Note: No definitions are given for pure virtual functions.
#include <sstream>
#include "Employee.h" // Employee class definition
using namespace std;

 // constructor
Employee::Employee(const string& first, const string& last,
    const string& ssn, const Date& birth)
    : firstName(first), lastName(last), socialSecurityNumber(ssn), birthDate(birth) {}

// set first name
void Employee::setFirstName(const string& first) {firstName = first;}

// return first name
string Employee::getFirstName() const {return firstName;}

// set last name
void Employee::setLastName(const string& last) {lastName = last;}

// return last name
string Employee::getLastName() const {return lastName;}

// set social security number
void Employee::setSocialSecurityNumber(const string& ssn) {
    socialSecurityNumber = ssn; // should validate
}

// return social security number
string Employee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

void Employee::setBirthDate(const Date& birth) {
    birthDate = birth;
}

Date Employee::getBirthDate() const {
    return birthDate;
}

// toString Employee's information (virtual, but not pure virtual)
string Employee::toString() const {
    return getFirstName() + " "s + getLastName() +
    "\nsocial security number: "s + getSocialSecurityNumber() +
        "\nbirthday: " + std::to_string(birthDate.getDay()) + "/" +
        std::to_string(birthDate.getMonth()) + "/" +
        std::to_string(birthDate.getYear());
}