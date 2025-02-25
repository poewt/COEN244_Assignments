/*
* Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 25, 2025
 * COEN 244 D
 * Assignment 2
 * Problem 2
 * I certify that this submission is my original work and meets the Faculty's Expectation of Originality.
 */

#include "Quadrilateral.h"
#include <iostream>
using namespace std;

Quadrilateral::Quadrilateral( const Point points[] )
    : Polygon(4, points)
{

}

Quadrilateral::Quadrilateral( const Quadrilateral &other )
    : Polygon(other), shorterSide(other.shorterSide), longerSide(other.longerSide), side(other.side)
{

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




