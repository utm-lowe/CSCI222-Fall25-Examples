/**
 * @file ball.hpp
 * @author Bob Lowe <rlowe8@utm.edu>
 * @brief Definition of the ball class.
 * @version 0.1
 * @date 2025-09-21
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef BALL_HPP
#define BALL_HPP
#include "terminal.hpp"

class Ball
{
public:
    /**
     * @brief Construct a new Ball object
     * 
     */
    Ball();

    /**
     * @brief Construct a new Ball object
     * 
     * @param x 1 based x coordinate
     * @param y 1 based y coordinate
     * @param dx X velocity
     * @param dy Y velocity
     */
    Ball(double x, double y, double dx, double dy);

    /**
     * @brief Draw the ball.
     * 
     */
    void draw() const;

    /**
     * @brief Erase the ball.
     * 
     */
    void erase() const;

    /**
     * @brief Move the ball according to its velocity.
     * 
     */
    void update();

    /**
     * @brief Set the Color of the ball
     * 
     * @param color 
     */
    void setColor(Color color);

    /**
     * @brief Set the Position of the ball
     * 
     * @param x 1 based x coordinate
     * @param y 1 based y coordinate
     */
    void setPosition(double x, double y);

    /**
     * @brief Set the Velocity of the ball
     * 
     * @param dx X component of velocity
     * @param dy Y component of velocity
     */
    void setVelocity(double dx, double dy);

    /**
     * @brief Get the x position
     * 
     * @return double 
     */
    double getX() const;

    /**
     * @brief Get the y position
     * 
     * @return double 
     */
    double getY() const;

    /**
     * @brief Get the x component of velocity.
     * 
     * @return double 
     */
    double getDx() const;

    /**
     * @brief Get the y component of velocity.
     * 
     * @return double 
     */
    double getDy() const;

    /**
     * @brief Bounce in the x direction.
     * 
     */
    void bounceX();

    /**
     * @brief Bounce in the y direction.
     * 
     */
    void bounceY();
private:
    double x;   // x position
    double y;   // y position
    double dx;  // x velocity
    double dy;  // y velocity
    Color color; 
};

#endif // BALL_HPP