#include "ball.h"

Ball::Ball(double x, double y, double vx, double vy) :
    MovingThing(x, y, 1, 1, vx, vy)
{
    this->setForeground(WHITE);
}

Ball::~Ball() {}

void Ball::draw() const
{
    setTextColor(getForeground());
    cursorPosition(getX(), getY());
    std::cout << "o";
    setTextColor(DEFAULT);
}

void Ball::handleCollision(Thing *other)
{
    // handle bouncing
    Thing::Collision dir = collisionDirection(other);
    if(dir == TOP || dir == BOTTOM) {
        // y bounce
        vy = -vy;
    } else if(dir == LEFT || dir == RIGHT) {
        // x bounce
        vx = -vx;
    }

    resolveOverlap(other);
}