/*
* Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 8, 2025
 * COEN 244 D
 * Assignment 1
 * Problem 2
 */

#include "Employee.h"


// Constructors ==============================================================
Employee::Employee() : firstName(""), lastName(""), monthlySalary(0)
{

}

Employee::Employee(
    const string& firstName,
    const string& lastName,
    const int& monthlySalary
    ) :
    firstName(firstName),
    lastName(lastName),
    monthlySalary(monthlySalary <= 0 ? 0 : monthlySalary)
{

}

Employee::Employee(const Employee &other ) :
    firstName(other.firstName),
    lastName(other.lastName),
    monthlySalary(other.monthlySalary <= 0 ? 0 : other.monthlySalary)

{

}


// Getters ==============================================================
string Employee::getFirstName() const
{
    return firstName;
}

string Employee::getLastName() const
{
    return lastName;
}

int Employee::getMonthlySalary() const
{
    return monthlySalary;
}

// Setters ==============================================================
void Employee::setFirstName(const string& firstName)
{
    this->firstName = firstName;
}

void Employee::setLastName(const string& lastName)
{
    this->lastName = lastName;
}

void Employee::setMonthlySalary( const int &monthlySalary )
{
    if (monthlySalary <= 0)
        this->monthlySalary = 0;
    else
        this->monthlySalary = monthlySalary;
}

// Member Functions =====================================================

// Destructor ==============================================================
Employee::~Employee()
{

}

