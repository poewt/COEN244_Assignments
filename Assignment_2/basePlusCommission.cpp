//
// Created by jake on 2025-02-20.
//

#include "basePlusCommission.h"

#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const std::string &firstName,
    const std::string &lastName,
    const std::string &socialSecurityNumber,
    double grossSales,
    double commissionRate,
    double baseSalary
) : CommissionEmployee(firstName, lastName, socialSecurityNumber, grossSales, commissionRate),
    baseSalary(baseSalary)
{
}

BasePlusCommissionEmployee::BasePlusCommissionEmployee( const BasePlusCommissionEmployee &other )
    : CommissionEmployee(other), baseSalary(other.baseSalary)
{
}

void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
    if ( salary < 0 )
    {
        throw invalid_argument("Invalid base salary, base salary must be equal to or greater than zero.");
    }
    baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
    return baseSalary + ( commissionRate * grossSales );
}

string BasePlusCommissionEmployee::toString() const
{
    ostringstream out;
    out << fixed << setprecision(2);
    out << "Commission Employee: " << firstName << " " << lastName
            << "\nSocial Security Number: " << socialSecurityNumber
            << "\nGross Sales: " << grossSales
            << "\nCommission Rate: " << commissionRate
            << "\nBase Salary: " << baseSalary
            << "\nEarnings: " << earnings();
    return out.str();
}





