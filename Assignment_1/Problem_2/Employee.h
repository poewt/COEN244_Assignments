//
// Created by jake on 2025-02-08.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;


class Employee {
private:
    string firstName;
    string lastName;
    int monthlySalary;

public:
    // Constructors
    Employee();
    Employee(
        const string& firstName,
        const string& lastName,
        const int& monthlySalary
        );
    Employee(const Employee& other);

    // Getters
    string getFirstName() const;
    string getLastName() const;
    int getMonthlySalary() const;

    // Setters
    void setFirstName(const string& firstName);
    void setLastName(const string& lastName);
    void setMonthlySalary(const int& monthlySalary);

    // Member functions


    // Destructor
    ~Employee();

};



#endif //EMPLOYEE_H
