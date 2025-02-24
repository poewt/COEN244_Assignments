//
// Created by jake on 2025-02-24.
//

#include "Quadrilateral.h"
#include <iostream>
using namespace std;

Quadrilateral::Quadrilateral( const Point points[] )
    : Polygon(4, points)
{
    Quadrilateral::calculateNewSides();
}

Quadrilateral::Quadrilateral( const Quadrilateral &other )
    : Polygon(other), shorterSide(other.shorterSide), longerSide(other.longerSide), side(other.side)
{

}

void Quadrilateral::setPoint( int index, const Point &p )
{
    Polygon::setPoint(index, p);

}

void Quadrilateral::setPoint( int index, double x, double y )
{
    Polygon::setPoint(index, x, y);
}

double Quadrilateral::getLongerSide() const
{
    return longerSide;
}

double Quadrilateral::getShorterSide() const
{
    return shorterSide;
}


double Quadrilateral::getSide() const
{
    return side;
}

void Quadrilateral::calculateNewSides()
{
    // Temp vars
    double shortest = 0;
    double longest = 0;

    for ( int i = 0; i < 4; ++i )
    {
        const double len = getLenBetweenPoints(points[i], points[(i + 1) % 4]);
        // Initialize if not already
        if (shortest == 0 || longest == 0)
        {
            shortest = len;
            longest = len;
            continue;
        }

        if (len > longest)
            longest = len;
        else if (len < shortest)
            shortest = len;
    }

    side = shortest;
    shorterSide = shortest;
    longerSide = longest;
}




