//
// Created by jake on 2025-02-24.
//

#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include "Polygon.h"


class Quadrilateral : public Polygon {
private:
    double shorterSide;
    double longerSide;
    double side;
public:
    Quadrilateral(const Point points[]);
    Quadrilateral(const Quadrilateral& other);

    // Setters
    void setPoint(int index, const Point& p) override;
    void setPoint(int index, double x, double y) override;

    // Getters
    double getShorterSide() const;
    double getLongerSide() const;
    double getSide() const;

    // Member Functions
    virtual void calculateNewSides();
};



#endif //QUADRILATERAL_H
