/*
 * commission.cpp
 *
 *  Created on: Sep. 26, 2024
 *      Author: umroot
 *
 * Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 25, 2025
 * COEN 244 D
 * Assignment 2
 * Problem 1
 * I certify that this submission is my original work and meets the Faculty's Expectation of Originality.
 */

#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>
#include <iomanip>
#include "commission.h"
using namespace std;

CommissionEmployee::CommissionEmployee(
	const string &fName,
	const string &lName,
	const string &sequence,
	double sales,
	double rate
	) :
	firstName(fName),
	lastName(lName),
	socialSecurityNumber(sequence),
	grossSales(sales),
	commissionRate(rate)
{
}

CommissionEmployee::CommissionEmployee( const CommissionEmployee &other ) :
	firstName(other.firstName),
	lastName(other.lastName),
	socialSecurityNumber(other.socialSecurityNumber),
	grossSales(other.grossSales),
	commissionRate(other.commissionRate)
{
}


void CommissionEmployee::setFirstName( const std::string &name )
{
	firstName = name;
}

std::string CommissionEmployee::getFirstName() const
{
	return firstName;
}

void CommissionEmployee::setLastName( const std::string &name )
{
	lastName = name;
}

std::string CommissionEmployee::getLastName() const
{
	return lastName;
}

void CommissionEmployee::setSocialSecurityNumber( const std::string &sequence )
{
	socialSecurityNumber = sequence;
}

std::string CommissionEmployee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales( double sales )
{
	if ( sales < 0.0 )
		throw invalid_argument("Gross sales must be >=0.0");
	grossSales = sales;
}

double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

void CommissionEmployee::setCommissionRate( double rate )
{
	if ( rate <= 0.0 || rate >= 1.0 )
	{
		throw invalid_argument("Commission rate must be >0.0 and < 1.0");
	}
	commissionRate = rate;
}

double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}

double CommissionEmployee::earnings() const
{
	//calculate earnings
	return commissionRate * grossSales;
}

std::string CommissionEmployee::toString() const
{
	// return string representation;

	ostringstream output;
	output << fixed << setprecision(2);
	output << "commission employee: " << firstName
			<< " " << lastName
			<< "\nsocial security number: " << socialSecurityNumber
			<< "\ngross sales: " << grossSales
			<< "\ncommission rate: " << commissionRate
			<< "\nearnings: " << std::setprecision(2) << earnings();
	return output.str();
}

bool checkGrossSales( const CommissionEmployee &emp, double baseline )
{
	return emp.grossSales >= baseline;
}

