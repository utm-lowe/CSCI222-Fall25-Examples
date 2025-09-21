/**
 * @file main.cpp
 * @author Bob Lowe <rlowe8@utm.edu>
 * @brief Bouncing Ball Demo
 * @version 0.1
 * @date 2025-09-21
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "terminal.hpp"
#include "ball.hpp"
#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    int w, h;      // box size
    double dx, dy; // velocity

    // get the width and height
    cout << "Width: ";
    cin >> w;
    cout << "Height: ";
    cin >> h;

    // get the velocity
    cout << "X Velocity: ";
    cin >> dx;
    cout << "Y Velocity: ";
    cin >> dy;

    // Create the ball
    Ball ball(w/2.0, h/2.0, dx, dy);
    ball.setColor(GREEN);

    // set up the terminal
    clearScreen();
    hideCursor();

    // draw the box
    setBackgroundColor(BLUE);
    for(int i=1; i<=h; i++) {
        // start at the beginning of the row
        cursorPosition(1, i);
        for(int j=1; j<=w; j++) {
            cout << " ";
        }
    }

    // animation loop
    while(true) {
        ball.erase();
        ball.update();
        
        // handle x bounce
        if(ball.getX() <=1) {
            ball.setPosition(1, ball.getY());
            ball.bounceX();
        } else if(ball.getX() >= w) {
            ball.setPosition(w, ball.getY());
            ball.bounceX();
        }

        // handle y bounce
        if(ball.getY() <= 1) {
            ball.setPosition(ball.getX(), 1);
            ball.bounceY();
        } else if(ball.getY() >= h) {
            ball.setPosition(ball.getX(), h);
            ball.bounceY();
        }

        ball.draw();

        usleep(100 * 1000);  // 10 frames per second
    }
}