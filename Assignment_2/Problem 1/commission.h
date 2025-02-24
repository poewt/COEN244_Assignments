/*
 * commission.h
 *
 *  Created on: Sep. 26, 2024
 *      Author: umroot
 */

#ifndef COMMISSION_H_
#define COMMISSION_H_

#include <string>
using namespace std;

class CommissionEmployee
{
public:
	CommissionEmployee(
		const std::string &,
		const std::string &,
		const std::string &s,
		double = 0.0,
		double = 0.0 );

	CommissionEmployee( const CommissionEmployee &other );

	void setFirstName( const std::string & );

	std::string getFirstName() const;

	void setLastName( const std::string & );

	std::string getLastName() const;

	void setSocialSecurityNumber( const std::string & );

	std::string getSocialSecurityNumber() const;

	void setGrossSales( double );

	double getGrossSales() const;

	void setCommissionRate( double );

	double getCommissionRate() const;

	double earnings() const; //calculate earnings
	//could be overloaded by derived classes
	std::string toString() const; // return string representation;
	//could be overloaded by derived classes

	// returns true if gross sales is greater or equal to baseline, otherwise false
	friend bool checkGrossSales( const CommissionEmployee &, double baseline );

protected:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	double grossSales;
	double commissionRate;
};


#endif /* COMMISSION_H_ */
