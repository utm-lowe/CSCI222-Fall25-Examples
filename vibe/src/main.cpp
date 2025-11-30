// main.cpp - Entry point for tic-tac-toe game

#include "termplay.h"
#include "tictactoegame.h"
#include <iostream>

int main()
{
    // Initialize keyboard for raw input
    initKeyboard();
    
    // Clear screen and hide cursor
    clearScreen();
    hideCursor();
    
    // Create and run the game
    TicTacToeGame game;
    game.run();
    
    // Clean up
    showCursor();
    clearScreen();
    closeKeyboard();
    
    std::cout << "Thanks for playing Tic-Tac-Toe!" << std::endl;
    
    return 0;
}
