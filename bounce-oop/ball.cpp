/**
 * @file ball.cpp
 * @author Bob Lowe <rlowe8@utm.edu>
 * @brief Implementation of the ball class.
 * @version 0.1
 * @date 2025-09-21
 *
 * @copyright Copyright (c) 2025
 *
 */
#include "terminal.hpp"
#include "ball.hpp"
#include <iostream>

// Construct a new Ball object
Ball::Ball()
{
    // Start the ball in the upper left hand corner
    x = 1;
    y = 1;
    
    // make the ball stationary
    dx = 0;
    dy = 0;

    // default color
    color = DEFAULT;
}

// Construct a new Ball object
Ball::Ball(double x, double y, double dx, double dy)
{
    this->x = x;
    this->y = y;
    this->dx = dx;
    this->dy = dy;
}

// Draw the ball.
void Ball::draw() const
{
    cursorPosition((int) x, (int) y);
    setTextColor(color);
    std::cout << "O" << std::flush;
    setTextColor(DEFAULT);
}

// Erase the ball.
void Ball::erase() const
{
    cursorPosition((int) x, (int) y);
    std::cout << " " << std::flush;
}

 // Move the ball according to its velocity.
void Ball::update()
{
    setPosition(x+dx, y+dy);
}

// Set the Color of the ball
void Ball::setColor(Color color)
{
    this->color = color;
}

// Set the Position of the ball
void Ball::setPosition(double x, double y)
{
    // force a valid coordinate
    if(x<1) x = 1;
    if(y<1) y = 1;

    // set the position
    this->x = x;
    this->y = y;
}

 // Set the Velocity of the ball
void Ball::setVelocity(double dx, double dy)
{
    this->dx = dx;
    this->dy = dy;
}

// Get the x position
double Ball::getX() const
{
    return x;
}

 // Get the y position
double Ball::getY() const
{
    return y;
}

 // Get the x component of velocity.
double Ball::getDx() const
{
    return dx;
}

 // Get the y component of velocity.
double Ball::getDy() const
{
    return dy;
}

// Bounce in the x direction.
void Ball::bounceX()
{
    dx = -dx;
}

 // Bounce in the y direction.
void Ball::bounceY()
{
    dy = -dy;
}