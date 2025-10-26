/**
 * @file wall.cpp
 * @author Bob Lowe <rlowe8@utm.edu>
 * @brief Implementation of the wall
 * @version 0.1
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
#include <iomanip>
#include "wall.h"

 // Construct a new Wall object
Wall::Wall(double x, double y, double w, double h) : Thing(x, y, w, h)
{
    this->setBackground(WHITE);
}

Wall::~Wall()
{

}

 // Draw the wall
void Wall::draw() const
{
    setBackgroundColor(this->getBackground());

    for(int row=0; row<getHeight(); row++) {
        cursorPosition(getX(), getY() + row);
        std::cout << std::setw(getWidth()) << " ";
    }

    setBackgroundColor(DEFAULT);
}

 // Update the wall (do nothing)
void Wall::update() 
{
    // nothing to do 
}