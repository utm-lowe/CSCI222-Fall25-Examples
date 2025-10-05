/**
 * @file main.cpp
 * @author Robert Lowe <rlowe8@utm.edu>
 * @brief Demonstrating the operation of an object with overloaded oeprators.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include "point.h"

int main() {
    std::cout << "Enter two points as: x1 y1 x2 y2\n";
    Point a, b;
    if (!(std::cin >> a >> b)) {
        std::cerr << "Invalid input.\n";
        return 1;
    }

    std::cout << "Point A: " << a << "\n";
    std::cout << "Point B: " << b << "\n";

    // Midpoint using overloaded + and /
    Point m = midpoint(a, b);
    std::cout << "Midpoint: " << m << "\n";

    // Increment a point by (dx, dy)
    std::cout << "Enter a delta as: dx dy\n";
    Point d;
    if (!(std::cin >> d)) {
        std::cerr << "Invalid delta.\n";
        return 1;
    }

    Point inc = a;     // copy construct (Rule of Three in action)
    inc += d;          // uses operator+=
    std::cout << "A incremented by delta: " << inc << "\n";

    // Demonstrate accessors/mutators and this-> usage indirectly
    // e.g., set the midpoint's x to the average of A.x and B.x again (no-op)
    m.setX((a.getX() + b.getX()) / 2.0);
    m.setY((a.getY() + b.getY()) / 2.0);
    std::cout << "Midpoint (after setX/setY): " << m << "\n";

    // A quick scalar demo
    Point scaled = 3.0 * b;   // friend operator*(double, Point)
    std::cout << "3 * B = " << scaled << "\n";

    return 0;
}
