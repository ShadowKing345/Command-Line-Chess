#ifndef CHESS_HELPER_H
#define CHESS_HELPER_H

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include "PiecesType.h"
#include "Game.h"

class Helper {
public:
    static std::string stringToLower(std::string);
    static int getBoardNumber(std::string string);
    static std::string removeLetter(std::string &string, char letter);
};

#endif
