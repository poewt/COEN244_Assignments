//
// Created by jake on 2025-02-24.
//

#include "Polygon.h"

#include <iostream>
#include <math.h>
#include <ostream>
#include <valarray>
using namespace std;

Polygon::Polygon(const int& size, const Point points[] ) : size(size), points(new Point[size])
{
    // Allocate new point array using size in member list initialization
    // Then attribute each point using for loop
    for (int i = 0; i < size; i++)
    {
        this->points[i] = points[i];
    }
}

Polygon::Polygon( const Polygon &other ) : size(other.size), points(other.points)
{

}

void Polygon::setPoint( int index, const Point &p )
{
    points[index].setX(p.getX());
    points[index].setY(p.getY());
}

void Polygon::setPoint( int index, double x, double y )
{
    points[index].setX(x);
    points[index].setY(y);
}

double Polygon::area() const
{
    double area = 0.0;
    for (int i = 0; i < size; i++)
    {
        // Modulus of size ensures that when we reach the end of the array
        // it resolves to 0 (first item in the array)
        area = area + crossProduct(points[i], points[(i + 1) % size]);
    }

    return abs(0.5 * area);
}

double Polygon::getLenBetweenPoints( const Point &p1, const Point &p2 )
{
    const double x = p2.getX() - p1.getX();
    const double y = p2.getY() - p1.getY();
    return sqrt(x*x + y*y);
}

double Polygon::crossProduct(const Point &a, const Point &b)
{
    return a.getX() * b.getY() - a.getY() * b.getX();
}

Polygon::~Polygon()
{
    delete[] points;
}
