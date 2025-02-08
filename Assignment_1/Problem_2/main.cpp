#include <iostream>
#include "Employee.h"
using namespace std;

void testDefaultEmployee()
{
    cout << "======= Employee - Default ========================" << endl;

    Employee employee;

    cout << "First Name: " << employee.getFirstName() << endl;
    cout << "Last Name: " << employee.getLastName() << endl;
    cout << "Monthly Salary: " << employee.getMonthlySalary() << endl;
}

void testCustomEmployee()
{
    cout << "======= Employee - Custom ========================" << endl;

    Employee employee("Jake", "Martinez", 3000);

    cout << "First Name: " << employee.getFirstName() << endl;
    cout << "Last Name: " << employee.getLastName() << endl;
    cout << "Monthly Salary: " << employee.getMonthlySalary() << endl;
}

void testSetters()
{
    cout << "======= Employee - Setters ========================" << endl;

    Employee employee;

    employee.setFirstName("Jim");
    employee.setLastName("Bob");
    employee.setMonthlySalary(2000);

    cout << "First Name: " << employee.getFirstName() << endl;
    cout << "Last Name: " << employee.getLastName() << endl;
    cout << "Monthly Salary: " << employee.getMonthlySalary() << endl;
}

void testNegativeSalaryConst()
{
    cout << "======= Employee - Negative Salary Constructor ========================" << endl;

    Employee employee("Anon", "Nymous", -5000);

    cout << "First Name: " << employee.getFirstName() << endl;
    cout << "Last Name: " << employee.getLastName() << endl;
    cout << "Monthly Salary: " << employee.getMonthlySalary() << endl;
}

void testNegativeSalarySetter()
{
    cout << "======= Employee - Negative Salary Setter ========================" << endl;

    Employee employee("Bobby", "Brown", 5000);

    cout << "First Name: " << employee.getFirstName() << endl;
    cout << "Last Name: " << employee.getLastName() << endl;
    cout << "Monthly Salary: " << employee.getMonthlySalary() << endl;

    cout << "Oops. Setting a negative salary..." << endl;
    employee.setMonthlySalary(-10000);
    cout << "New Monthly Salary: " << employee.getMonthlySalary() << endl;
}

void testEmployeeRaise()
{
    cout << "======= Employee - Raises ========================" << endl;

    Employee emp1("John", "Doe", 2500);
    Employee emp2("Sarah", "Jane", 2750);

    cout << emp1.getFirstName() << "'s initial monthly salary: " << emp1.getMonthlySalary() << endl;
    cout << emp2.getFirstName() << "'s initial monthly salary: " << emp2.getMonthlySalary() << endl;

    cout << "Congrats! Everyone has a 10% salary increase." << endl;
    emp1.setMonthlySalary(static_cast<int>(emp1.getMonthlySalary() * 1.10));
    emp2.setMonthlySalary(static_cast<int>(emp2.getMonthlySalary() * 1.10));

    cout << emp1.getFirstName() << "'s new monthly salary: " << emp1.getMonthlySalary() << endl;
    cout << emp2.getFirstName() << "'s new monthly salary: " << emp2.getMonthlySalary() << endl;

}


int main()
{
    testDefaultEmployee();
    testCustomEmployee();
    testSetters();
    testNegativeSalaryConst();
    testNegativeSalarySetter();
    testEmployeeRaise();
    return 0;
}
