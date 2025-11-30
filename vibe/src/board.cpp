// board.cpp - Board class implementation

#include "board.h"
#include "terminal.h"
#include <iostream>

// Constructor
Board::Board(double x, double y) 
    : Thing(x, y, CELL_WIDTH * 3 + 2, CELL_HEIGHT * 3 + 2)
{
    // Initialize 3x3 board with empty spaces
    board.resize(3);
    for (int i = 0; i < 3; i++) {
        board[i].resize(3, ' ');
    }
}

// Destructor
Board::~Board()
{
}

// Draw the board
void Board::draw() const
{
    // Draw the grid structure and marks
    for (int row = 0; row < 3; row++) {
        for (int line = 0; line < CELL_HEIGHT; line++) {
            for (int col = 0; col < 3; col++) {
                double cellX = x + col * (CELL_WIDTH + 1);
                double cellY = y + row * (CELL_HEIGHT + 1) + line;
                
                cursorPosition(cellX, cellY);
                
                if (line == 1) {
                    // Middle line - show the mark
                    std::cout << "  " << board[row][col] << "  ";
                } else {
                    // Top or bottom line
                    std::cout << "     ";
                }
                
                // Draw vertical separator except after last column
                if (col < 2) {
                    std::cout << "|";
                }
            }
        }
        
        // Draw horizontal separator except after last row
        if (row < 2) {
            cursorPosition(x, y + (row + 1) * (CELL_HEIGHT + 1) - 1);
            std::cout << "-----+-----+-----";
        }
    }
    std::cout << std::flush;
}

// Update (nothing to update for static board)
void Board::update()
{
}

// Place a mark on the board
bool Board::placeMark(int row, int col, char player)
{
    if (row < 0 || row > 2 || col < 0 || col > 2) {
        return false;
    }
    
    if (board[row][col] != ' ') {
        return false;
    }
    
    board[row][col] = player;
    return true;
}

// Check if a position is empty
bool Board::isEmpty(int row, int col) const
{
    if (row < 0 || row > 2 || col < 0 || col > 2) {
        return false;
    }
    return board[row][col] == ' ';
}

// Check for a winner
char Board::checkWinner() const
{
    // Check rows
    for (int row = 0; row < 3; row++) {
        if (board[row][0] != ' ' && 
            board[row][0] == board[row][1] && 
            board[row][1] == board[row][2]) {
            return board[row][0];
        }
    }
    
    // Check columns
    for (int col = 0; col < 3; col++) {
        if (board[0][col] != ' ' && 
            board[0][col] == board[1][col] && 
            board[1][col] == board[2][col]) {
            return board[0][col];
        }
    }
    
    // Check diagonals
    if (board[1][1] != ' ') {
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
            return board[1][1];
        }
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
            return board[1][1];
        }
    }
    
    // Check for draw
    bool full = true;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (board[row][col] == ' ') {
                full = false;
                break;
            }
        }
        if (!full) break;
    }
    
    if (full) {
        return 'D'; // Draw
    }
    
    return ' '; // No winner yet
}

// Reset the board
void Board::reset()
{
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            board[row][col] = ' ';
        }
    }
}

// Get mark at position
char Board::getMark(int row, int col) const
{
    if (row < 0 || row > 2 || col < 0 || col > 2) {
        return ' ';
    }
    return board[row][col];
}
