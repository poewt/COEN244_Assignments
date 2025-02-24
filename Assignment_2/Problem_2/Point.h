//
// Created by jake on 2025-02-24.
//

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
