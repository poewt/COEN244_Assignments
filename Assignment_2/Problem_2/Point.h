/*
* Jacques Ivan Cacatian-Martinez
 * 40291760
 * February 25, 2025
 * COEN 244 D
 * Assignment 2
 * Problem 2
 * I certify that this submission is my original work and meets the Faculty's Expectation of Originality.
 */

#ifndef POINT_H
#define POINT_H



class Point {
private:
    double x;
    double y;

public:
    Point();
    Point(const double& x, const double& y);
    Point(const Point& point);

    void setX(const double&);
    void setY(const double&);

    double getX() const;
    double getY() const;

    ~Point();
};



#endif //POINT_H
