//
// Created by jake on 2025-02-24.
//

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
