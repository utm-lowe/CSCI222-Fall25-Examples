/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief Main function for the block game.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <string>
#include <unistd.h>
#include "termplay.h"
#include "wall.h"
#include "paddle.h"
#include "ball.h"

using namespace std;

class BlockGame : public Game
{
public:
    BlockGame() : 
        ball(25, 13, 0.25, 0.25),
        paddle(23, 21)
    {
        add(&ball);
        add(&paddle);

        // add my walls
        add(new Wall(15, 3, 1, 20));
        add(new Wall(35, 3, 1, 20));
        add(new Wall(15, 3, 21,1));
    }

    virtual void handleFrame() override
    {
        // check for the ball leaving the playfield
        if(ball.getY() >= 23) {
            ball.erase();
            ball.setPosition(25, 13);
            ball.setVelocity(0.25, 0.25);
        }
    }

private:
    Ball ball;
    Paddle paddle;
};

int main()
{
    BlockGame game;

    // run the game
    game.run();
}

