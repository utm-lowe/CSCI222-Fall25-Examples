/**
 * @file point.cpp
 * @author Robert Lowe <rlowe8@utm.edu>
 * @brief Implementation of a simple point object.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "point.h"
#include <stdexcept>

// ----- Constructors -----
Point::Point() : x_(0.0), y_(0.0) {}

Point::Point(double x, double y) : x_(x), y_(y) {}

// ----- Rule of Three -----
Point::Point(const Point& other) : x_(other.x_), y_(other.y_) {}

Point& Point::operator=(const Point& other) {
    if (this != &other) {
        this->x_ = other.x_;
        this->y_ = other.y_;
    }
    return *this;
}

Point::~Point() = default;

// ----- Accessors / Mutators -----
double Point::getX() const { return x_; }
double Point::getY() const { return y_; }

void Point::setX(double x) { this->x_ = x; }  // using this-> to show disambiguation
void Point::setY(double y) { this->y_ = y; }

// ----- Point arithmetic -----
Point Point::operator+(const Point& rhs) const {
    return Point(this->x_ + rhs.x_, this->y_ + rhs.y_);
}

Point Point::operator-(const Point& rhs) const {
    return Point(this->x_ - rhs.x_, this->y_ - rhs.y_);
}

Point& Point::operator+=(const Point& rhs) {
    this->x_ += rhs.x_;
    this->y_ += rhs.y_;
    return *this;
}

Point& Point::operator-=(const Point& rhs) {
    this->x_ -= rhs.x_;
    this->y_ -= rhs.y_;
    return *this;
}

// ----- Scalar operations -----
Point Point::operator*(double s) const {
    return Point(this->x_ * s, this->y_ * s);
}

Point Point::operator/(double s) const {
    if (s == 0.0) {
        throw std::runtime_error("Point division by zero scalar");
    }
    return Point(this->x_ / s, this->y_ / s);
}

// Symmetric scalar * Point
Point operator*(double s, const Point& p) {
    return Point(p.x_ * s, p.y_ * s);
}

// ----- Stream operators -----
// Prints like: (x, y)
std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x_ << ", " << p.y_ << ")";
    return os;
}

// Reads as two numbers: x y
std::istream& operator>>(std::istream& is, Point& p) {
    double x, y;
    if (is >> x >> y) {
        p.x_ = x;
        p.y_ = y;
    }
    return is;
}

// ----- Utility -----
Point midpoint(const Point& a, const Point& b) {
    return (a + b) / 2.0;
}
