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

using namespace std;



int main()
{
    Game game;

    // add the walls to my game
    game.add(new Wall(15, 3, 1, 20));
    game.add(new Wall(35, 3, 1, 20));
    game.add(new Wall(15, 3, 21,1));
    game.add(new Paddle(23, 21));

    // run the game
    game.run();
}

