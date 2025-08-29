/**
 * @file args.cpp
 * @author Bob Lowe <rlowe8@utm.edu>
 * @brief A command line argument demonstration
 * @version 0.1
 * @date 2025-08-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>

int main(int argc, char *argv[]) 
{
    std::cout << "Number of arguments: " << argc << std::endl;
    for(int i=0; i<argc; i++) {
        std::cout << argv[i] << std::endl;
    }
}