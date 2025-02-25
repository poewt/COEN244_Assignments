/*
* Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 25, 2025
 * COEN 244 D
 * Assignment 2
 * Problem 2
 * I certify that this submission is my original work and meets the Faculty's Expectation of Originality.
 */

#ifndef POLYGON_H
#define POLYGON_H
#include "Point.h"


class Polygon {
protected:
    int size;
    Point* points;
public:
    Polygon(const int& size, const Point points[]);
    Polygon(const Polygon& other);

    // Virtual functions
    virtual void setPoint(int index, const Point& p);
    virtual void setPoint(int index, double x, double y);
    virtual double area() const;

    // Static function independent of object
    static double getLenBetweenPoints(const Point& p1, const Point& p2);
    static double crossProduct(const Point &a, const Point &b);

    virtual ~Polygon();
};



#endif //POLYGON_H
