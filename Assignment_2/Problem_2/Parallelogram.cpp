//
// Created by jake on 2025-02-24.
//

#include "Parallelogram.h"

Parallelogram::Parallelogram( const Point points[] )
    : Quadrilateral(points)
{
    // Calculate acute angle here
    acuteAngle = 0;
}

Parallelogram::Parallelogram( const Parallelogram &other )
    : Quadrilateral(other), acuteAngle(other.acuteAngle)
{

}

double Parallelogram::getAcuteAngleInRadian() const
{

}


