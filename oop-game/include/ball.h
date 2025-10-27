#ifndef BALL_H
#define BALL_H
#include "termplay.h"

class Ball : public MovingThing
{
public:
    Ball(double x, double y, double vx, double vy);

    virtual ~Ball();

    virtual void draw() const override;

    virtual void handleCollision(Thing *other) override;
};
#endif