/*
 * Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 8, 2025
 * COEN 244 D
 * Assignment 1
 * Problem 2
 */

#include <iostream>
#include "Employee.h"
#include <algorithm>
using namespace std;

bool isEmployeeEqual(
    const Employee& emp,
    const string& firstName,
    const string& lastName,
    const int& monthlySalary)
{
    bool isEqual = true;

    if (emp.getFirstName() != firstName ||
        emp.getLastName() != lastName ||
        emp.getMonthlySalary() != monthlySalary
        )
    {
        isEqual = false;
    }

    return isEqual;
}

bool testDefaultEmployee()
{
    cout << "======= Case - Default Constructor ========================" << endl;

    Employee employee;

    cout << "First Name: " << employee.getFirstName() << endl;
    cout << "Last Name: " << employee.getLastName() << endl;
    cout << "Monthly Salary: " << employee.getMonthlySalary() << endl;

    return isEmployeeEqual(employee, "", "", 0);
}

bool testCustomEmployee()
{
    cout << "======= Case - Custom Constructor ========================" << endl;

    Employee employee("Jake", "Martinez", 3000);

    cout << "First Name: " << employee.getFirstName() << endl;
    cout << "Last Name: " << employee.getLastName() << endl;
    cout << "Monthly Salary: " << employee.getMonthlySalary() << endl;

    return isEmployeeEqual(
        employee,
        "Jake",
        "Martinez",
        3000
        );
}

bool testSetters()
{
    cout << "======= Case - Setters ========================" << endl;

    Employee employee;

    employee.setFirstName("Jim");
    employee.setLastName("Bob");
    employee.setMonthlySalary(2000);

    cout << "First Name: " << employee.getFirstName() << endl;
    cout << "Last Name: " << employee.getLastName() << endl;
    cout << "Monthly Salary: " << employee.getMonthlySalary() << endl;

    return isEmployeeEqual(
        employee,
        "Jim",
        "Bob",
        2000
        );
}

bool testNegativeSalaryConst()
{
    cout << "======= Case - Negative Salary Constructor ========================" << endl;

    Employee employee("Anon", "Nymous", -5000);

    cout << "First Name: " << employee.getFirstName() << endl;
    cout << "Last Name: " << employee.getLastName() << endl;
    cout << "Monthly Salary: " << employee.getMonthlySalary() << endl;

    return isEmployeeEqual(
        employee,
        "Anon",
        "Nymous",
        0
        );
}

bool testNegativeSalarySetter()
{
    cout << "======= Case - Negative Salary Setter ========================" << endl;

    Employee employee("Bobby", "Brown", 5000);

    cout << "First Name: " << employee.getFirstName() << endl;
    cout << "Last Name: " << employee.getLastName() << endl;
    cout << "Monthly Salary: " << employee.getMonthlySalary() << endl;

    cout << "Oops. Setting a negative salary..." << endl;
    employee.setMonthlySalary(-10000);
    cout << "New Monthly Salary: " << employee.getMonthlySalary() << endl;

    return isEmployeeEqual(
        employee,
        "Bobby",
        "Brown",
        0
        );
}

bool testEmployeeRaise()
{
    cout << "======= Case - Raises ========================" << endl;

    Employee emp1("John", "Doe", 2500);
    Employee emp2("Sarah", "Jane", 2750);

    cout << emp1.getFirstName() << "'s initial monthly salary: " << emp1.getMonthlySalary() << endl;
    cout << emp2.getFirstName() << "'s initial monthly salary: " << emp2.getMonthlySalary() << endl;

    cout << "Congrats! Everyone has a 10% salary increase." << endl;
    emp1.setMonthlySalary(static_cast<int>(emp1.getMonthlySalary() * 1.10));
    emp2.setMonthlySalary(static_cast<int>(emp2.getMonthlySalary() * 1.10));

    cout << emp1.getFirstName() << "'s new monthly salary: " << emp1.getMonthlySalary() << endl;
    cout << emp2.getFirstName() << "'s new monthly salary: " << emp2.getMonthlySalary() << endl;

    return
        isEmployeeEqual(emp1, "John", "Doe", 2750) &&
            isEmployeeEqual(emp2, "Sarah", "Jane", 3025);
}

bool comp(const Employee& emp1, const Employee& emp2)
{
    return emp1.getMonthlySalary() < emp2.getMonthlySalary();
}

bool testSortEmployeeSalary()
{
    cout << "======= Case - Sort Employee Salary ========================" << endl;

    Employee employees[] = {
        Employee("Alice", "Smith", 3200),
        Employee("Bob", "Johnson", 2900),
        Employee("Charlie", "Williams", 3100),
        Employee("David", "Brown", 2800),
        Employee("Emma", "Davis", 3300),
        Employee("Frank", "Miller", 2700),
        Employee("Grace", "Wilson", 3000),
        Employee("Henry", "Moore", 3400),
        Employee("Isla", "Taylor", 2600),
        Employee("Jack", "Anderson", 3500),
        Employee("Kate", "Thomas", 2900),
        Employee("Liam", "White", 3100),
        Employee("Mia", "Harris", 3250),
        Employee("Noah", "Martin", 2800),
        Employee("Sam", "Rock", 2970),
    };

    const size_t size = sizeof(employees) / sizeof(employees[0]);
    cout << "Number of employees: " << size << endl;


    // Using sort instead of qsort for performance and safety
    sort(begin(employees), end(employees), comp);

    for (int i = 0; i < size; i++)
    {
        cout << i << ". " << employees[i].getFirstName() <<
            "'s salary: " << employees[i].getMonthlySalary() << endl;

        // Pass/Fail Test
        if (
            employees[i].getMonthlySalary() > employees[i + 1].getMonthlySalary() &&
            i < (size - 1)
            )
        {
            return false;
        }
    }

    return true;
}


int main()
{
    cout << "================ Start - Unit Testing ================" << endl;
    cout << (testDefaultEmployee() ? "PASS" : "FAIL") << endl;
    cout << (testCustomEmployee() ? "PASS" : "FAIL") << endl;
    cout << (testSetters() ? "PASS" : "FAIL") << endl;
    cout << (testNegativeSalaryConst() ? "PASS" : "FAIL") << endl;
    cout << (testNegativeSalarySetter() ? "PASS" : "FAIL") << endl;
    cout << (testEmployeeRaise() ? "PASS" : "FAIL") << endl;
    cout << (testSortEmployeeSalary() ? "PASS" : "FAIL") << endl;
    cout << "================ End - Unit Testing ================" << endl;

    return 0;
}
