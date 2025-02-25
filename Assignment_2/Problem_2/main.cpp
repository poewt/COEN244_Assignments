/*
* Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 25, 2025
 * COEN 244 D
 * Assignment 2
 * Problem 2
 * I certify that this submission is my original work and meets the Faculty's Expectation of Originality.
 */

#include <iomanip>
#include <iostream>
#include "Point.h"
#include "Polygon.h"
#include "Quadrilateral.h"
#include "Parallelogram.h"
using namespace std;

bool testPolygon()
{
    const Point points[] = {
        Point(7, 1),
        Point(8, 5),
        Point(5, 4),
        Point(2, 5),
        Point(1, 1)
    };
    Polygon p(5, points);

    // Precision set to 20 to get exact stored double value for comparison
    cout << setprecision(20);
    cout << "Area: " << p.area() << endl;

    return p.area() == 21;
}

bool testQuadrilateral()
{
    const Point points[] = {
        Point(-4, 3),
        Point(4, 2),
        Point(3, -2),
        Point(-4, -3)
    };

    Quadrilateral q(points);

    // Precision set to 20 to get exact stored double value for comparison
    cout << setprecision(20);
    cout << "Area: " << q.area() << endl;

    return q.area() == 37.5;
}

bool testParallelogram()
{
    const Point points[] = {
        Point(-4, 3),
        Point(2, 3),
        Point(4, -1),
        Point(-2, -1)
    };

    Parallelogram pl(points);

    // Precision set to 20 to get exact stored double value for comparison
    cout << setprecision(20);
    cout << "Area: " << pl.area() << endl;
    cout << "Shorter Side: " << pl.getShorterSide() << endl;
    cout << "Longer Side: " << pl.getLongerSide() << endl;
    cout << "Acute Angle (rad): " << pl.getAcuteAngleInRadian() << endl;

    if (pl.area() != 24.0)
        return false;
    if (pl.getShorterSide() != 4.4721359549995796101)
        return false;
    if (pl.getLongerSide() != 6.0)
        return false;
    if (pl.getAcuteAngleInRadian() != 1.107148717794090409)
        return false;

    return true;
}

int main()
{
    cout << "============== Test Case - Polygon ============" << endl;
    cout << (testPolygon() ? "PASS" : "FAIL") << endl;
    cout << "============== Test Case - Quadrilateral ============" << endl;
    cout << (testQuadrilateral() ? "PASS" : "FAIL") << endl;
    cout << "============== Test Case - Parallelogram ============" << endl;
    cout << (testParallelogram() ? "PASS" : "FAIL") << endl;
    return 0;
}
