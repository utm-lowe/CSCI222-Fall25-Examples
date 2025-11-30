/**
 * @file controller.h
 * @brief Input controller for TicTacToe (non-arrow keys)
 */
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "thing.h"
#include <string>

class TicTacToeGame; // forward declaration

/**
 * @brief Handles key presses other than movement and updates game state.
 */
class Controller : public Thing {
public:
    /**
     * @brief Construct a Controller bound to a TicTacToeGame
     */
    Controller(TicTacToeGame *game);
    virtual ~Controller();

    virtual void draw() const override; // no visual output
    virtual void update() override;     // nothing per frame
    virtual void handleKey(const std::string &key) override; // process input

private:
    TicTacToeGame *game; ///< owning game reference (not owned)
};

#endif // CONTROLLER_H
