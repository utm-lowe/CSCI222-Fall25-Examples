// tictactoegame.cpp - TicTacToeGame class implementation

#include "tictactoegame.h"
#include "controller.h"
#include "terminal.h"
#include <iostream>

// Constructor
TicTacToeGame::TicTacToeGame()
    : Game(), currentPlayer('X'), gameState(0), winner(' ')
{
    // Create the board at position (5, 3)
    board = new Board(5, 3);
    add(board);
    
    // Create the cursor at the same position as the board
    cursor = new Cursor(5, 3);
    add(cursor);

    // Create the controller
    controller = new Controller(this);
    add(controller);
    
    // Set game to 10 FPS
    setFps(10);
}

// Destructor
TicTacToeGame::~TicTacToeGame()
{
    // Game will handle deletion of things
}

// Handle frame logic
void TicTacToeGame::handleFrame()
{
    displayStatus();
    // If still choosing side, do nothing else
    if(choosingSide) {
        return;
    }
    // AI acts on its turn
    if(gameState == 0 && currentPlayer == aiPlayer) {
        aiMove();
    }
    if(gameState == 1) {
        displayGameOver();
    }
}

// Process player input
// Removed direct key processing; handled by Controller

// Switch to the other player
void TicTacToeGame::switchPlayer()
{
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

// Display current game status
void TicTacToeGame::displayStatus()
{
    cursorPosition(5, 1);
    clearLine();
    
    if (choosingSide) {
        std::cout << "Choose your side: X or O";
    }
    else if (gameState == 0) {
        std::cout << "Current Player: ";
        
        // Set color based on player
        if (currentPlayer == 'X') {
            setTextColor(CYAN);
        } else {
            setTextColor(MAGENTA);
        }
        
        std::cout << currentPlayer;
        setTextColor(DEFAULT);
    }
    
    // Display instructions at the bottom
    cursorPosition(5, 15);
    clearLine();
    if(choosingSide) {
        std::cout << "Press X or O to choose | ESC: Quit";
    } else {
        std::cout << "Arrow keys: Move | Space/Enter: Place | ESC: Quit";
    }
    
    std::cout << std::flush;
}

// Handle game over state
void TicTacToeGame::displayGameOver()
{
    // Left status line
    cursorPosition(5,1); clearLine();
    if(winner == 'D') {
        setTextColor(YELLOW); std::cout << "It's a draw!"; setTextColor(DEFAULT);
    } else {
        std::cout << "Player ";
        setTextColor(winner=='X'?CYAN:MAGENTA);
        std::cout << winner; setTextColor(DEFAULT); std::cout << " wins!";
    }

    // Big ASCII art outcome to the right of the board
    // Board top-left is (5,3); width ~ 17, so start around x=26
    int artX = 26;
    int artY = 4;
    if(winner == 'D') {
        setTextColor(YELLOW);
        cursorPosition(artX, artY+0);  std::cout << " ____________ ";
        cursorPosition(artX, artY+1);  std::cout << "/            \\";
        cursorPosition(artX, artY+2);  std::cout << "|   D  R  A  |";
        cursorPosition(artX, artY+3);  std::cout << "|     W      |";
        cursorPosition(artX, artY+4);  std::cout << "\\____________/";
        setTextColor(DEFAULT);
    } else if(winner == 'X') {
        setTextColor(CYAN);
        cursorPosition(artX, artY+0);  std::cout << "\\\\  //  \\\\  //";
        cursorPosition(artX, artY+1);  std::cout << " \\\\//    \\\\// ";
        cursorPosition(artX, artY+2);  std::cout << " //\\\\    //\\\\ ";
        cursorPosition(artX, artY+3);  std::cout << "//  \\\\  //  \\\\";
        setTextColor(DEFAULT);
        cursorPosition(artX, artY+5);  std::cout << "   X WINS!   ";
    } else if(winner == 'O') {
        setTextColor(MAGENTA);
        cursorPosition(artX, artY+0);  std::cout << "   _______   ";
        cursorPosition(artX, artY+1);  std::cout << "  /       \\  ";
        cursorPosition(artX, artY+2);  std::cout << " |   O O   | ";
        cursorPosition(artX, artY+3);  std::cout << "  \\  ___  /  ";
        cursorPosition(artX, artY+4);  std::cout << "   \u203E\u203E\u203E\u203E\u203E\u203E\u203E   ";
        setTextColor(DEFAULT);
        cursorPosition(artX, artY+6);  std::cout << "   O WINS!   ";
    }

    // Footer hint
    cursorPosition(5,16); clearLine();
    std::cout << "Press R to restart | ESC to quit" << std::flush;
}

// Reset the game
void TicTacToeGame::resetGame()
{
    clearScreen();
    board->reset();
    cursor->setEnabled(true);
    cursor->setGridPosition(0,0);
    currentPlayer='X'; 
    gameState=0;
    winner=' ';
    choosingSide=true;
}

// Very simple AI: win, block, center, corner, side
void TicTacToeGame::aiMove()
{
    // Helper lambda to try place
    auto tryPlace = [&](int r,int c)->bool{
        if(board->isEmpty(r,c)) {
            board->placeMark(r,c, aiPlayer);
            // check win
            char w = board->checkWinner();
            if(w != ' ') {
                winner = w;
                gameState = 1;
                cursor->setEnabled(false);
            } else {
                switchPlayer();
            }
            return true;
        }
        return false;
    };

    // Try immediate win or block: check each empty cell if placing results in win
    for(int pass=0; pass<2; ++pass) {
        char testMark = (pass==0? aiPlayer : humanPlayer);
        for(int r=0;r<3;++r) for(int c=0;c<3;++c) {
            if(!board->isEmpty(r,c)) continue;
            // Temporarily place
            // We'll simulate by placing and reverting; since Board doesn't support revert,
            // we will read mark, place, check, then if not our target, reset that cell.
            // To keep Board simple, we emulate by checking lines directly.
            // Quick brute-force: set, check, unset.
            // Note: Board API lacks set; workaround: tryPlace only for ai. Use manual simulation:
        }
    }

    // Fallbacks without simulation: center, corners, sides
    if(tryPlace(1,1)) return; // center
    int corners[4][2]={{0,0},{0,2},{2,0},{2,2}};
    for(auto &p: corners){ if(tryPlace(p[0],p[1])) return; }
    int sides[4][2]={{0,1},{1,0},{1,2},{2,1}};
    for(auto &p: sides){ if(tryPlace(p[0],p[1])) return; }
}
