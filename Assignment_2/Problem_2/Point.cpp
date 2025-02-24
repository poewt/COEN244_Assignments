//
// Created by jake on 2025-02-24.
//

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




