/**
 * @file wall.h
 * @author Bob Lowe <rlowe8@utm.edu>
 * @brief Define wall object.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef WALL_H
#define WALL_H
#include "termplay.h"

class Wall : public Thing
{
public:
    /**
     * @brief Construct a new Wall object
     * 
     * @param x 
     * @param y 
     * @param w 
     * @param h 
     */
    Wall(double x, double y, double w, double h);

    virtual ~Wall();

    /**
     * @brief Draw the wall
     * 
     */
    virtual void draw() const override;

    /**
     * @brief Update the wall (do nothing)
     * 
     */
    virtual void update() override;
};
#endif