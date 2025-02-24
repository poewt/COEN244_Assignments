#include <iostream>

#include "Parallelogram.h"
#include "Point.h"
#include "Polygon.h"
#include "Quadrilateral.h"
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

    cout << "Area: " << p.area() << endl;

    return p.area() == 21;
}

bool testQuadrilateral()
{
    const Point points[] = {
        Point(-4, 3),
        Point(4, 2),
        Point(-4, -3),
        Point(3, -2)
    };

    Quadrilateral q(points);

    cout << "Area: " << q.area() << endl;

    return q.area() == 3;
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

    cout << "Area: " << pl.area() << endl;
    cout << "Shorter Side: " << pl.getShorterSide() << endl;
    cout << "Longer Side: " << pl.getLongerSide() << endl;
    cout << "Acute Angle: " << pl.getAcuteAngleInRadian() << endl;

    return pl.area() == 24;
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
