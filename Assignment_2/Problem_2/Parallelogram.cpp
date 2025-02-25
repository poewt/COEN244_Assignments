/*
* Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 25, 2025
 * COEN 244 D
 * Assignment 2
 * Problem 2
 * I certify that this submission is my original work and meets the Faculty's Expectation of Originality.
 */

#include "Parallelogram.h"
#include <cmath>

Parallelogram::Parallelogram( const Point points[] )
    : Quadrilateral(points)
{
    // Calculate side, shorterSide, and longerSide
    Quadrilateral::calculateNewSides();
    calculateNewAcuteAngle();
}

Parallelogram::Parallelogram( const Parallelogram &other )
    : Quadrilateral(other), acuteAngle(other.acuteAngle)
{

}

double Parallelogram::getAcuteAngleInRadian() const
{
    return acuteAngle;
}

void Parallelogram::calculateNewAcuteAngle()
{
    // Formula to calculate acute angle given sides and area
    // A = absin(angle)
    // angle = arcsin(A/ab)
    acuteAngle = asin(area() / (shorterSide * longerSide));
}


