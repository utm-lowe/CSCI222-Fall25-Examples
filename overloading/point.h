/**
 * @file point.h
 * @author Robert Lowe <rlowe8@utm.edu>
 * @brief Definition of a simple point object.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
private:
    double x_;
    double y_;

public:
    // 1) No-arg constructor
    Point();

    // 2) Value constructor
    Point(double x, double y);

    // Rule of Three
    // 3) Copy constructor
    Point(const Point& other);

    // 4) Copy assignment
    Point& operator=(const Point& other);

    // 5) Destructor
    ~Point();

    // Accessors / Mutators
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    // Arithmetic between points
    Point operator+(const Point& rhs) const;
    Point operator-(const Point& rhs) const;
    Point& operator+=(const Point& rhs);
    Point& operator-=(const Point& rhs);

    // Scalar operations
    Point operator*(double s) const;
    Point operator/(double s) const; // throws on division by zero

    // Friends for symmetric scalar * Point and stream I/O
    friend Point operator*(double s, const Point& p);
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
    friend std::istream& operator>>(std::istream& is, Point& p);
};

// A handy free function for teaching composition of operators
Point midpoint(const Point& a, const Point& b);

#endif // POINT_H
