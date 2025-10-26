#ifndef PADDLE_H
#define PADDLE_H
#include "termplay.h"

class Paddle : public MovingThing
{
public:
    Paddle(double x, double y);
    virtual ~Paddle();

    virtual void draw() const override;

    virtual void handleKey(const std::string &key) override;

    virtual void handleCollision(Thing *other) override;
};
#endif