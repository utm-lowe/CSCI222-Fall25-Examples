/**
 * @file tictactoegame.h
 * @author CSCI222 Student
 * @brief Main tic-tac-toe game controller
 * @version 0.1
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef TICTACTOEGAME_H
#define TICTACTOEGAME_H

#include "game.h"
#include "board.h"
#include "cursor.h"
#include "controller.h"

/**
 * @brief Main game controller for tic-tac-toe
 * 
 * This class manages the game flow, player turns, win detection,
 * and user input for the tic-tac-toe game.
 */
class TicTacToeGame : public Game
{
public:
    /**
     * @brief Construct a new TicTacToeGame object.
     *
     * Initializes board, cursor, controller and sets starting player/state.
     */
    TicTacToeGame();

    /**
     * @brief Destroy the TicTacToeGame object.
     *
     * Cleanup handled by base Game which deletes Things.
     */
    virtual ~TicTacToeGame();

    /**
     * @brief Per-frame hook invoked after drawing/updating Things.
     *
     * Displays status line during play and game-over message when finished.
     */
    virtual void handleFrame() override;

    /**
     * @brief Switch to the other player ('X' <-> 'O').
     */
    void switchPlayer();

    /**
     * @brief Reset game state for a new round.
     *
     * Clears board, re-enables cursor, sets player to 'X', clears winner flag.
     */
    void resetGame();

    /**
     * @brief Allow Controller direct access to game internals for input handling.
     */
    friend class Controller;

private:
    /**
     * @brief Display current player and instructions line.
     */
    void displayStatus();

    /**
     * @brief Display game over message (winner or draw) and restart hint.
     */
    void displayGameOver();

    /**
     * @brief Execute the AI player's move when it's the computer's turn.
     */
    void aiMove();

    /**
     * @brief The game board (3x3 state & rendering).
     */
    Board *board;

    /**
     * @brief Player movement cursor.
     */
    Cursor *cursor;

    /**
     * @brief Input controller handling non-arrow keys.
     */
    Controller *controller;

    /**
     * @brief Current player mark ('X' or 'O').
     */
    char currentPlayer;

    /**
     * @brief Human player's mark ('X' or 'O').
     */
    char humanPlayer = 'X';

    /**
     * @brief Computer player's mark (opposite of human).
     */
    char aiPlayer = 'O';

    /**
     * @brief Game state flag (0 = playing, 1 = over).
     */
    int gameState;

    /**
     * @brief Setup flag: true while choosing human side.
     */
    bool choosingSide = true;

    /**
     * @brief Winner ('X','O','D' for draw, ' ' for none yet).
     */
    char winner;
};

#endif // TICTACTOEGAME_H
