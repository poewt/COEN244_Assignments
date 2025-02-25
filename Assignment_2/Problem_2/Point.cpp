/*
* Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 25, 2025
 * COEN 244 D
 * Assignment 2
 * Problem 2
 * I certify that this submission is my original work and meets the Faculty's Expectation of Originality.
 */

#include "Point.h"

Point::Point() : x(0), y(0)
{

}

Point::Point( const double &x, const double &y ) : x(x), y(y)
{

}

Point::Point( const Point &point ) : x(point.x), y(point.y)
{

}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::setX( const double & value)
{
    x = value;
}

void Point::setY( const double & value)
{
    y = value;
}

Point::~Point()
{

}




