/*
 * testDriver.cpp
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

#include "basePlusCommission.h"
#include "commission.h"
#include <iostream>
using namespace std;

void testBaseObject()
{
	CommissionEmployee comMember //base class
			("hkl", "yui", "4567890234", 350000, 0.35);
	cout << comMember.toString() << endl;
}

void testDerivedObject()
{
	BasePlusCommissionEmployee basePlusMember //derived class
			("abc", "def", "0987654321", 250000, 0.15, 5000);

	cout << basePlusMember.toString() << endl;
}

void testBaseObjectCopy()
{
	CommissionEmployee baseMem(
		"John",
		"Doe",
		"10101010101",
		1000000.00,
		2.0
	);
	cout << ">>> BASE MEMBER -------------" << endl;
	cout << baseMem.toString() << endl;

	CommissionEmployee baseMemCopy(baseMem);
	cout << ">>> COPIED BASE MEMBER -------------" << endl;
	cout << baseMemCopy.toString() << endl;
}

void testDerivedObjectCopy()
{
	BasePlusCommissionEmployee basePlusMem(
		"Sarah",
		"Jane",
		"4242424242",
		80000.00,
		2.5,
		65000.00
	);

	cout << ">>> BASE PLUS MEMBER -------------" << endl;
	cout << basePlusMem.toString() << endl;

	BasePlusCommissionEmployee basePlusMemCopy(basePlusMem);
	cout << ">>> COPIED BASE PLUS MEMBER -------------" << endl;
	cout << basePlusMemCopy.toString() << endl;
}

void testFriendAndInheritance()
{
	BasePlusCommissionEmployee basePlusMember(
		"abc",
		"def",
		"0987654321",
		250000,
		0.15,
		5000
	);

	cout << "Case $100,000: " << ( checkGrossSales(basePlusMember, 100000) ? "PASS" : "FAIL" ) << endl;
	cout << "Case $5,000: " << ( checkGrossSales(basePlusMember, 5000) ? "PASS" : "FAIL" ) << endl;
}

int main()
{
	cout << "------------test base object--------------------" << endl;
	testBaseObject();
	cout << "\n------------test derived object--------------------" << endl;
	testDerivedObject();
	cout << "------------test copied base object--------------------" << endl;
	testBaseObjectCopy();
	cout << "\n------------test copied derived object--------------------" << endl;
	testDerivedObjectCopy();
	cout << "\n------------test friend function--------------------" << endl;
	testFriendAndInheritance();
}

