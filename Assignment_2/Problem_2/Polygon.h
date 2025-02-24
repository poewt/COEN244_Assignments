//
// Created by jake on 2025-02-24.
//

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

    virtual void setPoint(int index, const Point& p);
    virtual void setPoint(int index, double x, double y);
    virtual double area() const;

    // Static function independent of object
    static double getLenBetweenPoints(const Point& p1, const Point& p2);
    static double crossProduct(const Point &a, const Point &b);

    virtual ~Polygon();
};



#endif //POLYGON_H
