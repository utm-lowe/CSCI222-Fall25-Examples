// controller.cpp - Controller implementation
#include "controller.h"
#include "tictactoegame.h"
#include "terminal.h"
#include <iostream>

Controller::Controller(TicTacToeGame *game)
    : Thing(0,0,0,0), game(game) {}

Controller::~Controller() {}

void Controller::draw() const { /* nothing */ }
void Controller::update() { /* nothing */ }

void Controller::handleKey(const std::string &key)
{
    if(key.empty()) return;
    // Handle choosing side at start
    if(game->choosingSide) {
        if(key == "x" || key == "X") {
            game->humanPlayer = 'X';
            game->aiPlayer = 'O';
            game->choosingSide = false;
        } else if(key == "o" || key == "O") {
            game->humanPlayer = 'O';
            game->aiPlayer = 'X';
            game->choosingSide = false;
        }
        return;
    }

    // Movement handled by Cursor object directly; ignore arrow keys here.
    if(key == "up" || key == "down" || key == "left" || key == "right") return;

    // Only act if game playing
    if(game->gameState == 0) {
        // Only allow human to place on their turn
        if(game->currentPlayer != game->humanPlayer) return;
        if(key == " " || key == "\n" || key == "\r") {
            int row = game->cursor->getRow();
            int col = game->cursor->getCol();
            if(game->board->placeMark(row,col, game->currentPlayer)) {
                // switch player
                game->switchPlayer();
                // check winner
                char w = game->board->checkWinner();
                if(w != ' ') {
                    game->winner = w;
                    game->gameState = 1;
                    game->cursor->setEnabled(false);
                }
            }
        }
    } else { // game over state
        if(key == "r" || key == "R") {
            game->resetGame();
        }
    }
    // Esc handled by Game loop for termination. (q ignored)
}
