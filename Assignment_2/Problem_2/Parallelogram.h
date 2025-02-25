/*
* Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 25, 2025
 * COEN 244 D
 * Assignment 2
 * Problem 2
 * I certify that this submission is my original work and meets the Faculty's Expectation of Originality.
 */

#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include "Quadrilateral.h"


class Parallelogram : public Quadrilateral {
private:
    double acuteAngle;
public:
    Parallelogram(const Point points[]);
    Parallelogram(const Parallelogram& other);
    double getAcuteAngleInRadian() const;

    // Member Functions
    void calculateNewAcuteAngle();
};

#endif //PARALLELOGRAM_H
