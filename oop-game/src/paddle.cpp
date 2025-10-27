#include "paddle.h" 
#include "wall.h"

Paddle::Paddle(double x, double y) : MovingThing(x, y, 4, 1)
{
    this->setForeground(WHITE);
}

Paddle::~Paddle()
{

}

void Paddle::draw() const
{
    setTextColor(this->getForeground());
    cursorPosition(getX(), getY());
    std::cout << "====";
}

void Paddle::handleKey(const std::string &key) 
{
    vx = 0; // assume no motion
    if(key == "left") {
        vx = -1;
    } else if(key == "right") {
        vx = 1;
    }
}

void Paddle::handleCollision(Thing *other)
{
    // handle collisions with walls
    if(dynamic_cast<Wall*>(other) != nullptr) {
        resolveOverlap(other);
    }
}
