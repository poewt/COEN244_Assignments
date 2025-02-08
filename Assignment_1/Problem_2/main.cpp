#include <iostream>
#include "Employee.h"
#include <algorithm>
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

bool comp(const Employee& emp1, const Employee& emp2)
{
    return emp1.getMonthlySalary() < emp2.getMonthlySalary();
}

bool testSortEmployeeSalary()
{
    cout << "======= Employee - Sort Employee Salary ========================" << endl;

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
    cout << size << endl;


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
    testDefaultEmployee();
    testCustomEmployee();
    testSetters();
    testNegativeSalaryConst();
    testNegativeSalarySetter();
    testEmployeeRaise();

    string caseEmpSalSort = testSortEmployeeSalary() ? "PASS" : "FAIL";
    cout << "The case for employee salary sort: " << caseEmpSalSort << endl;
    
    cout << "================ End - Unit Testing ================" << endl;

    return 0;
}
