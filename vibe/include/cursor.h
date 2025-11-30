/**
 * @file cursor.h
 * @author CSCI222 Student
 * @brief Interactive cursor for tic-tac-toe game
 * @version 0.1
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef CURSOR_H
#define CURSOR_H

#include "thing.h"

/**
 * @brief Represents a cursor for player input
 * 
 * This class displays a cursor that the player can move around the board
 * to select where to place their mark.
 */
class Cursor : public Thing
{
public:
    /**
     * @brief Construct a new Cursor object
     * 
     * @param x The x-coordinate of the cursor
     * @param y The y-coordinate of the cursor
     */
    Cursor(double x, double y);

    /**
     * @brief Destroy the Cursor object
     * 
     */
    virtual ~Cursor();

    /**
     * @brief Draw the cursor on the terminal
     * 
     */
    virtual void draw() const override;

    /**
     * @brief Update the cursor's state
     * 
     */
    virtual void update() override;

    /**
     * @brief Handle key press events for cursor movement
     * 
     * @param key The key that was pressed
     */
    virtual void handleKey(const std::string &key) override;

    /**
     * @brief Get the current row position (0-2)
     * 
     * @return int The row position
     */
    int getRow() const;

    /**
     * @brief Get the current column position (0-2)
     * 
     * @return int The column position
     */
    int getCol() const;

    /**
     * @brief Set the cursor to a specific grid position
     * 
     * @param row The row (0-2)
     * @param col The column (0-2)
     */
    void setGridPosition(int row, int col);

    /**
     * @brief Enable or disable the cursor
     * 
     * @param enabled True to enable, false to disable
     */
    void setEnabled(bool enabled);

    /**
     * @brief Check if the cursor is enabled
     * 
     * @return true if enabled
     * @return false if disabled
     */
    bool isEnabled() const;

private:
    /**
     * @brief Current row position (0-2)
     * 
     */
    int row;

    /**
     * @brief Current column position (0-2)
     * 
     */
    int col;

    /**
     * @brief Whether the cursor is currently enabled
     * 
     */
    bool enabled;

    /**
     * @brief The x-offset for the board
     * 
     */
    double boardX;

    /**
     * @brief The y-offset for the board
     * 
     */
    double boardY;

    /**
     * @brief Width of each cell
     * 
     */
    static const int CELL_WIDTH = 5;

    /**
     * @brief Height of each cell
     * 
     */
    static const int CELL_HEIGHT = 3;

    /**
     * @brief Update the cursor's screen position based on grid position
     * 
     */
    void updateScreenPosition();
};

#endif // CURSOR_H
