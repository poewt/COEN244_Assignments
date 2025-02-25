/*
* Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 25, 2025
 * COEN 244 D
 * Assignment 2
 * Problem 2
 * I certify that this submission is my original work and meets the Faculty's Expectation of Originality.
 */

#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include "Polygon.h"


class Quadrilateral : public Polygon {
protected:
    double shorterSide;
    double longerSide;
    double side;
public:
    Quadrilateral(const Point points[]);
    Quadrilateral(const Quadrilateral& other);

    // Getters
    double getShorterSide() const;
    double getLongerSide() const;
    double getSide() const;

    // Member Functions
    virtual void calculateNewSides();
};

#endif //QUADRILATERAL_H
