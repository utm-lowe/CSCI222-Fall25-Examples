/**
 * @file board.h
 * @author CSCI222 Student
 * @brief Tic-Tac-Toe game board display
 * @version 0.1
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef BOARD_H
#define BOARD_H

#include "thing.h"
#include <vector>

/**
 * @brief Represents the tic-tac-toe game board
 * 
 * This class handles the display and state of a 3x3 tic-tac-toe board.
 */
class Board : public Thing
{
public:
    /**
     * @brief Construct a new Board object
     * 
     * @param x The x-coordinate of the board's top-left corner
     * @param y The y-coordinate of the board's top-left corner
     */
    Board(double x, double y);

    /**
     * @brief Destroy the Board object
     * 
     */
    virtual ~Board();

    /**
     * @brief Draw the board on the terminal
     * 
     */
    virtual void draw() const override;

    /**
     * @brief Update the board's state
     * 
     */
    virtual void update() override;

    /**
     * @brief Place a mark (X or O) at the given position
     * 
     * @param row The row (0-2)
     * @param col The column (0-2)
     * @param player The player mark ('X' or 'O')
     * @return true if the mark was placed successfully
     * @return false if the position was already occupied
     */
    bool placeMark(int row, int col, char player);

    /**
     * @brief Check if a position is empty
     * 
     * @param row The row (0-2)
     * @param col The column (0-2)
     * @return true if the position is empty
     * @return false if the position is occupied
     */
    bool isEmpty(int row, int col) const;

    /**
     * @brief Check for a winner
     * 
     * @return char 'X' if X wins, 'O' if O wins, 'D' for draw, ' ' for no winner yet
     */
    char checkWinner() const;

    /**
     * @brief Reset the board to initial state
     * 
     */
    void reset();

    /**
     * @brief Get the mark at a specific position
     * 
     * @param row The row (0-2)
     * @param col The column (0-2)
     * @return char The mark at that position (' ', 'X', or 'O')
     */
    char getMark(int row, int col) const;

private:
    /**
     * @brief The 3x3 game board state
     * 
     */
    std::vector<std::vector<char>> board;

    /**
     * @brief The visual width of each cell
     * 
     */
    static const int CELL_WIDTH = 5;

    /**
     * @brief The visual height of each cell
     * 
     */
    static const int CELL_HEIGHT = 3;
};

#endif // BOARD_H
