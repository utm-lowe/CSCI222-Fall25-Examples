// cursor.cpp - Cursor class implementation

#include "cursor.h"
#include "terminal.h"
#include <iostream>

// Constructor
Cursor::Cursor(double x, double y) 
    : Thing(x, y, 1, 1), row(0), col(0), enabled(true), boardX(x), boardY(y)
{
    setForeground(YELLOW);
    updateScreenPosition();
}

// Destructor
Cursor::~Cursor()
{
}

// Draw the cursor
void Cursor::draw() const
{
    if (!enabled) {
        return;
    }
    
    cursorPosition(x, y);
    
    // Set color
    if (fgColor != DEFAULT) {
        setTextColor(fgColor);
    }
    
    std::cout << "[";
    
    // Reset color
    if (fgColor != DEFAULT) {
        setTextColor(DEFAULT);
    }
    
    cursorPosition(x + CELL_WIDTH - 1, y);
    
    // Set color
    if (fgColor != DEFAULT) {
        setTextColor(fgColor);
    }
    
    std::cout << "]";
    
    // Reset color
    if (fgColor != DEFAULT) {
        setTextColor(DEFAULT);
    }
    
    std::cout << std::flush;
}

// Update (nothing to update for cursor)
void Cursor::update()
{
}

// Handle keyboard input
void Cursor::handleKey(const std::string &key)
{
    if (!enabled) {
        return;
    }
    
    if (key == "up" && row > 0) {
        row--;
        updateScreenPosition();
    } else if (key == "down" && row < 2) {
        row++;
        updateScreenPosition();
    } else if (key == "left" && col > 0) {
        col--;
        updateScreenPosition();
    } else if (key == "right" && col < 2) {
        col++;
        updateScreenPosition();
    }
}

// Get the current row
int Cursor::getRow() const
{
    return row;
}

// Get the current column
int Cursor::getCol() const
{
    return col;
}

// Set grid position
void Cursor::setGridPosition(int row, int col)
{
    if (row >= 0 && row <= 2) {
        this->row = row;
    }
    if (col >= 0 && col <= 2) {
        this->col = col;
    }
    updateScreenPosition();
}

// Set enabled state
void Cursor::setEnabled(bool enabled)
{
    this->enabled = enabled;
}

// Check if enabled
bool Cursor::isEnabled() const
{
    return enabled;
}

// Update screen position based on grid position
void Cursor::updateScreenPosition()
{
    x = boardX + col * (CELL_WIDTH + 1);
    y = boardY + row * (CELL_HEIGHT + 1) + 1;
}
