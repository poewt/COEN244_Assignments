//
// Created by jake on 2025-02-24.
//

#include "Parallelogram.h"
#include <cmath>

Parallelogram::Parallelogram( const Point points[] )
    : Quadrilateral(points)
{
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


